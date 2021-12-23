/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:50:12 by lpascrea          #+#    #+#             */
/*   Updated: 2021/12/23 14:13:35 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main(void)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));

	/**********Filling data**********/
	std::cout << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::cout << "Filling up values" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

	/*******Values Verification*******/
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	std::cout << "It's ok values are equals" << std::endl;
	std::cout << "---------------------------------" << std::endl;

    /*************Scope***************/
    {
		std::cout << std::endl;
		std::cout << "----------Inside a scope---------" << std::endl;
        Array<int> tmp = numbers;
		Array<int> test(tmp);
    }
	std::cout << "---------------------------------" << std::endl;
	std::cout << std::endl;

	/***********exceptions**********/
	std::cout << "------------Exceptions-----------" << std::endl;
	try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << "---------------------------------" << std::endl;
	std::cout << std::endl;

	/******************************/
	for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;

	return 0;
}