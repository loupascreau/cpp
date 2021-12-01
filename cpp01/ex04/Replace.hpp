/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:28:24 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/01 17:51:10 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <fstream>
# include <ostream>

class Replace
{
	public :
	
	Replace();
	~Replace();
	
	void	replaceString(std::ifstream &fileIn, char *fileName, std::string s1, std::string s2);
};

#endif