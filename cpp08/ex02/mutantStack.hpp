/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:04:22 by lpascrea          #+#    #+#             */
/*   Updated: 2022/01/10 06:13:36 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :

	MutantStack<T>(void)
	{
		std::cout << "MutantStack constructor called" << std::endl;
		std::cout << std::endl;
	}

	MutantStack<T>(MutantStack<T> const & obj)
	{
		*this = obj;
		return ;
	}

	~MutantStack<T>(void)
	{
		std::cout << std::endl;
		std::cout << "MutantStack destructor called" << std::endl;
	}

	MutantStack &	operator=(MutantStack<T> const & obj) { return *this; }
};

template <typename T>
std::ostream &  operator<<(std::ostream &o, MutantStack<T> const &obj)
{
	std::stack<int>	temp;

	if (!obj.empty())
	{
		temp = obj;
		while (!temp.empty())
		{
			o << " " << temp.top() << std::endl;
			temp.pop();
		}
		o << " --" << std::endl;
		o << std::endl;
	}
	else
		o << "stack is empty" << std::endl;
	return o;
}

#endif