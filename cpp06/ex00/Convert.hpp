/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:59:45 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/20 12:10:46 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>

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

	void	handleErrors(int argc, char **argv);
};

#endif