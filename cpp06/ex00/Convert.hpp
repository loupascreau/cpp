/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:59:45 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/21 11:20:07 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cstdlib>
# include <cmath>
# include <iomanip>

class Convert
{
	public :

	Convert();
	Convert(Convert const &obj);
	~Convert();

	Convert &	operator=(Convert const &obj);

	class MissingArgs : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "Missing argument";
		}
	};

	class TooManyArgs : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "Too Many arguments";
		}	
	};

	void	handleErrors(int argc);
	void	isError(int n, char *string);

	void	setType(char *string);

	private :

	void	isChar(char *string);
	void	isInt(char *string);
	void	isFloat(char *string);
	void	isDouble(char *string);
	bool	_isError;
};

#endif