/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:06:54 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/01 18:00:57 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H

# include <iostream>
# include <fstream>
# include <iomanip>
# include <string>

# include "Replace.hpp"

int		errorNbArgs(int argc);
void	getFileName(char (&newFilename)[1024], char *str);
void	manageLines(std::ifstream &file, std::ofstream &newFile, std::string s1, std::string s2);

#endif