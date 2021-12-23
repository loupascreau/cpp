/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 11:14:54 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/23 14:10:54 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>
# define MAX_VAL 750

template <typename T>
class Array
{
	public :
	
	Array<T>(void) : _size(0), _array(NULL)
	{
		std::cout << "Default Constructor called" << std::endl;
	}
	
	Array<T>(unsigned int n) : _size(n), _array(new T[n])
	{
		std::cout << "Array Constructor called, size = " << this->_size << std::endl;
	}

	Array<T>(Array<T> const & obj)
	{
		int		i;

		i = 0;
		std::cout << "Copy Constructor called, size = " << obj.getSize() << std::endl;
		this->_size = obj.getSize();
		this->_array = new T[this->_size];
		while (i < this->_size)
		{
			this->_array[i] = obj._array[i];
			i++;
		}
	}
	
	Array<T> &	operator=(Array<T> const & obj)
	{
		int		i;

		i = 0;
		std::cout << "Assignement operator called" << std::endl;
		if (this == &obj)
			return *this;
		if (this->_size > 0)
			delete [] this->_array;
		this->_size = obj.getSize();
		this->_array = new T[this->_size];
		while (i < this->_size)
		{
			this->_array[i] = obj._array[i];
			i++;
		}
		return *this;
	}

	T &	operator[](int i)
	{
		if (i < 0 || i >= this->_size)
			throw std::overflow_error("Error : Trying to access an invalid index");
		return this->_array[i];
	}
	
	~Array<T>(void)
	{
		std::cout << "Destructor called" << std::endl;
		if (this->_size > 0)
			delete [] this->_array;
		
	}

	T	*getArray(void) const { return this->_array; };
	int	getSize(void) const { return this->_size; };

	private :

	int	_size;
	T	*_array;
};

#endif