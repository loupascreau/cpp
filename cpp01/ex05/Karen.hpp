/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 09:00:44 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/02 10:50:16 by lpascrea         ###   ########.fr       */
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

	private :

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};

#endif