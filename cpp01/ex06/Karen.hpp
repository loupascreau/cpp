/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 09:00:44 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/02 12:18:50 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

# define	WHITE	"\033[0m"
# define	YELLOW	"\033[0;33m"

class Karen
{
	public :

	Karen();
	~Karen();

	void	complain(std::string level);
	void	setIndex(std::string str);
	void	getIndex(std::string str, Karen &karen) const;

	private :

	void		debug(void);
	void		info(void);
	void		warning(void);
	void		error(void);
	int			_index;
	std::string	_messages[4];
};

#endif