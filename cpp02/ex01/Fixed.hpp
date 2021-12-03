/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:05:16 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/03 16:17:34 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public :
	
	Fixed(int const integer);
	Fixed(float const floating);
	Fixed(Fixed const &obj);
	Fixed();
	~Fixed();

	Fixed &	operator=(Fixed const &rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	private :

	int			_fixedPoint;
	static int	_nbrBits;
};

std::ostream &	operator<<(std::ostream &o, Fixed const &i);

#endif