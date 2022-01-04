/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 06:22:00 by kali              #+#    #+#             */
/*   Updated: 2022/01/04 12:02:17 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <stdexcept>
# include <vector>
# include <algorithm>

class Span
{
	public :

	Span(void);
	Span(unsigned int number);
 	Span(Span const &obj);
	~Span(void);

	Span &  operator=(Span const &obj);

	void	addNumber(int nbrToStore);
	int		shortestSpan(Span const &obj) const;
	int		longestSpan(Span const &obj) const;

	class noSpan : public std::exception
    {
        virtual const char* what() const throw()
        {
            return "Exception -> No span to find";
        }
    };

	int									getSize(void) const;
	std::vector<int>					getVector(void) const;
	std::vector<int>::const_iterator	getBegin(void) const;
	std::vector<int>::const_iterator	getEnd(void) const;

	private :

	unsigned int		_size;
	std::vector<int>	_vec;
};

std::ostream &  operator<<(std::ostream &o, Span const &obj);

#endif
