/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/21 14:30:55 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Struct.hpp"

uintptr_t	serialize(Data *ptr)
{
	uintptr_t	raw;

	std::cout << "..serialization.." << std::endl;
	raw = reinterpret_cast<uintptr_t>(ptr);
	return raw;
}

Data		*deserialize(uintptr_t raw)
{
	Data	*junior;

	std::cout << "..deserialization.." << std::endl;
	junior = reinterpret_cast<Data*>(raw);
	return junior;
}

int		main(void)
{
	Data		footballeur;
	Data		*junior = NULL;
	uintptr_t	raw;
	
	footballeur.player = "mbappe";
	footballeur.goals = 112;
	
	std::cout << "Data footballeur before serialize -----------------> player = " << footballeur.player;
	std::cout << " | goals = " << footballeur.goals << " | " << &footballeur << std::endl;
	
	raw = serialize(&footballeur);
	std::cout << "uintptr_t raw = " << raw << std::endl;
	junior = deserialize(raw);

	std::cout << "Data junior after deserialize (from footballeur) --> player = " << junior->player;
	std::cout << " | goals = " << junior->goals << " | " << junior << std::endl;
	return 0;
}