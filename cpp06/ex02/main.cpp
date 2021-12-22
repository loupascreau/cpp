/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/22 11:11:54 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

Base	*generate(void)
{
	int		randNbr;
	
	std::cout << "..Generating a derived Base class.." << std::endl;
	std::srand(std::time(NULL));
	randNbr = rand() % 3;
	switch (randNbr)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return NULL;
}

void	identify(Base *p)
{
	std::cout << "identify with '*p' : " << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	Base	Base;

	std::cout << "identify with '&p' : " << std::endl;
	try
	{
		Base = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast & e)
	{
		try
		{
			Base = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::bad_cast & e)
		{
			try
			{
				Base = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch (std::bad_cast & e)
			{
				std::cout << e.what() << std::endl;
			}
		}
	}
}

int		main(void)
{
	Base	*Base = generate();

	identify(Base);
	identify(*Base);

	std::cout << "..Deleting our derived Base class.." << std::endl;
	delete Base;
	return 0;
}