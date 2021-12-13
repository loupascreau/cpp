/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 10:08:07 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/13 15:26:18 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public :

	Brain();
	Brain(Brain const &obj);
	~Brain();

	Brain &	operator=(Brain const &obj);
	
	void		initIdeas(void);
	void		setIdeas(std::string idea, int i);
	std::string	getIdeas(int i) const;
	void		setType(std::string type);
	std::string	getType(void) const;

	private :

	std::string	_ideas[100];
	std::string	_type;
};

#endif