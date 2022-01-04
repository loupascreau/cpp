/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 06:22:57 by kali              #+#    #+#             */
/*   Updated: 2022/01/04 12:46:22 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) : _size(0), _vec(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int number) : _size(number), _vec(0)
{
	std::cout << "Span constructor called (size = " << this->_size << ")" << std::endl;
	std::cout << std::endl;
}

Span::Span(Span const &obj)
{
	*this = obj;
}

Span &	Span::operator=(Span const &obj)
{
	this->_size = obj.getSize();
	this->_vec = obj.getVector();
	return *this;
}

void	Span::addNumber(int nbrToStore)
{
	if (this->_vec.size() == this->_size)
		std::cout << "Impossible to add (" << nbrToStore << ") : storage full" << std::endl;
	else
	{
		this->_vec.push_back(nbrToStore);
		std::cout << "(" << nbrToStore << ") added" << std::endl;
	}
}

int		Span::shortestSpan(Span const &obj) const
{
	std::vector<int>			tmp;
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	it2;
	int							span;

	span = -1;
	if (obj.getSize() <= 1)
		throw noSpan();
	tmp = obj.getVector();
	sort(tmp.begin(), tmp.end());
	span = *(tmp.end() - 1) - *(tmp.begin());
	if (obj.getSize() == 2)
		return span;
	for (it = tmp.begin(); it != tmp.end(); it++)
	{
		for (it2 = it + 1; it2 != tmp.end(); it2++)
		{
			if (*it2 - *it < span)
				span = *it2 - *it;
		} 
	}
	return span;
}

int		Span::longestSpan(Span const &obj) const
{
	std::vector<int>			tmp;
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	it2;
	int							span;

	span = -1;
	if (obj.getSize() <= 1)
		throw noSpan();
	tmp = obj.getVector();
	sort(tmp.begin(), tmp.end());
	if (obj.getSize() == 2)
		return (*(tmp.end() - 1) - *(tmp.begin()));
	for (it = tmp.begin(); it != tmp.end(); it++)
	{
		for (it2 = it + 1; it2 != tmp.end(); it2++)
		{
			if (*it2 - *it > span)
				span = *it2 - *it;
		} 
	}
	return span;	
}

int							Span::getSize(void) const
{
	return this->_size;
}

std::vector<int>			Span::getVector(void) const
{
	return this->_vec;
}

std::vector<int>::const_iterator			Span::getBegin(void) const
{
	return this->_vec.begin();
}

std::vector<int>::const_iterator			Span::getEnd(void) const
{
	return this->_vec.end();
}

Span::~Span(void)
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream &  operator<<(std::ostream &o, Span const &obj)
{
	std::vector<int>::const_iterator	it;
	
	/**********Print span numbers********/
	o << std::endl;
	o << "[ SPAN Recap ]" << std::endl;
	o << "numbers : ";
	for (it = obj.getBegin(); it != obj.getEnd(); it++)
	{
		o << *it;
		if (it + 1 != obj.getEnd())
			o << " -> ";
	}
	o << std::endl;

	/**********Shortest span***********/
	try
	{
		o << "Shortest span : ";
		o << obj.shortestSpan(obj);
	}
	catch (std::exception & e)
	{
		o << e.what();
	}
	o << std::endl;
	
	/***********Longest span***********/
	try
	{
		o << "Longest span : ";
		o << obj.longestSpan(obj);
	}
	catch (std::exception & e)
	{
		o << e.what();
	}
	o << std::endl;
	return o;
}