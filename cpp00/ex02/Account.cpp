/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpascrea <lpascrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:38:35 by lpascrea          #+#    #+#             */
/*   Updated: 2021/11/25 13:38:42 by lpascrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#define WITHE	"\033[0m"
#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define YELLOW	"\033[0;33m"
#define BLUE	"\033[0;96m"

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_nbAccounts++;
	_totalAmount = initial_deposit;
	_totalNbDeposits++;
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 1;
	this->_nbWithdrawals = 0;
}

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	std::cout << std::endl;
	std::cout << BLUE << "[ACCOUNTS INFOS]" << WITHE << std::endl;
	std::cout << "Nbr total account = " << getNbAccounts() << std::endl;
	std::cout << "Total amount = " << getTotalAmount() << std::endl;
	std::cout << "Nbr deposits = " << getNbDeposits() << std::endl;
	std::cout << "Nbr withdrawals = " << getNbWithdrawals() << std::endl;
	std::cout << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	std::cout << GREEN << "Deposit : " << WITHE << deposit << " in " << this->_accountIndex << std::endl;
	this->_amount = deposit;
	this->_nbDeposits++;
	_totalAmount += this->_amount;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal <= this->_amount)
	{
		std::cout << RED << "Withdrawal : " << WITHE << withdrawal << " in " << this->_accountIndex << std::endl;
		this->_amount -= withdrawal;
		_totalAmount -= this->_amount;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		return true;
	}
	else
		return false;
}

int		Account::checkAmount( void ) const
{
	return this->_amount;
}

void	Account::displayStatus( void ) const
{
	std::cout << YELLOW << "[ STATUS ]" << WITHE << std::endl;
	std::cout << "Account nbr : " << this->_accountIndex << std::endl;
	std::cout << "amount = " << this->_amount << std::endl;
	std::cout << "Nbr deposits = " << this->_nbDeposits << std::endl;
	std::cout << "Nbr withdrawals = " << this->_nbWithdrawals << std::endl;	
	std::cout << std::endl;
}

Account::~Account()
{
	
}