/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 06:22:57 by kali              #+#    #+#             */
/*   Updated: 2022/01/11 07:53:40 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) : _size(0), _vec(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int number) : _size(number), _vec(0)
{
	std::cout << GREEN << "[ CONSTRUCTOR ] " << END;
	std::cout << "Span called (size = " << this->_size << ")" << std::endl;
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
	try
	{
		if (this->_vec.size() == this->_size)
			throw noSpaceToAddNbr();
		else
			this->_vec.push_back(nbrToStore);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

int		Span::shortestSpan(void) const
{
	std::vector<int>			tmp;
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	it2;
	int							span;

	span = -1;
	if (this->getSize() <= 1 || this->getVectorSize() <= 1)
		throw noSpan();
	tmp = this->getVector();
	sort(tmp.begin(), tmp.end());
	span = *(tmp.end() - 1) - *(tmp.begin());
	if (this->getSize() == 2)
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

int		Span::longestSpan(void) const
{
	std::vector<int>			tmp;
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	it2;
	int							span;

	span = -1;
	if (this->getSize() <= 1 || this->getVectorSize() <= 1)
		throw noSpan();
	tmp = this->getVector();
	sort(tmp.begin(), tmp.end());
	if (this->getSize() == 2)
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

int							Span::getVectorSize(void) const
{
	return this->_vec.size();
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

void						Span::setBigSpan(void)
{
	int		i;
	
	i = 0;
	std::srand(std::time(NULL));
	while (i < this->getSize())
	{
		this->addNumber(rand());
		i++;
	}
}

void	Span::addByRangeIterator(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		this->addNumber(*begin);
		begin++;
	}
}

Span::~Span(void)
{
	std::cout << RED << "[ DESTRUCTOR ] " << END;
	std::cout << "Span called" << std::endl;
}

std::ostream &  operator<<(std::ostream &o, Span const &obj)
{
	std::vector<int>::const_iterator	it;
	
	o << YELLOW << "[ SPAN Recap ]" << END << std::endl;

	/**********Shortest span***********/
	try
	{
		o << "Shortest span : ";
		o << obj.shortestSpan();
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
		o << obj.longestSpan();
	}
	catch (std::exception & e)
	{
		o << e.what();
	}
	o << std::endl;
	return o;
}