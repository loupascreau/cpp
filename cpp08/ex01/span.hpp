/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 06:22:00 by kali              #+#    #+#             */
/*   Updated: 2022/01/11 07:52:33 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <stdexcept>
# include <vector>
# include <algorithm>
# include <ctime>
# include <cstdlib>
# define	END		"\033[0m"
# define	RED		"\033[0;31m"
# define	GREEN	"\033[0;32m"
# define	YELLOW	"\033[0;33m"

class Span
{
	public :

	Span(void);
	Span(unsigned int number);
 	Span(Span const &obj);
	~Span(void);

	Span &  operator=(Span const &obj);

	void	addNumber(int nbrToStore);
	int		shortestSpan(void) const;
	int		longestSpan(void) const;

	class noSpaceToAddNbr : public std::exception
    {
        virtual const char* what() const throw()
        {
            return "Impossible to add a number : storage already full";
        }
    };

	class noSpan : public std::exception
    {
        virtual const char* what() const throw()
        {
            return "Exception -> No span to find";
        }
    };

	int									getSize(void) const;
	int									getVectorSize(void) const;
	std::vector<int>					getVector(void) const;
	std::vector<int>::const_iterator	getBegin(void) const;
	std::vector<int>::const_iterator	getEnd(void) const;

	void								setBigSpan(void);
	void								addByRangeIterator(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	private :

	unsigned int		_size;
	std::vector<int>	_vec;
};

std::ostream &  operator<<(std::ostream &o, Span const &obj);

#endif
