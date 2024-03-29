/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:43:30 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/23 10:58:24 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *array, int len, void (*ftPass)(T &array, int len))
{
	ftPass(*array, len);
};

template <typename T>
void	ftIncrement(T &array, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		array[i] += 1;
		i++;
	}
};

#endif