/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 22:20:16 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/05 01:09:21 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <time.h>

#define BLUE "\033[1;34m"
#define RESET "\033[0m"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account()
{

}

Account::Account(int initial_deposit)
{
	Account::_accountIndex = _nbAccounts;
	Account::_amount = initial_deposit;
	Account::_totalAmount += Account::_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << BLUE << Account::_accountIndex << RESET;
	std::cout << ";amount:" << BLUE << Account::_amount << RESET << ";created" << std::endl;
	_nbAccounts++;
}

Account::~Account()
{

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
	Account::_displayTimestamp();
	std::cout << "accounts:" << BLUE << getNbAccounts() << RESET << ";total:";
	std::cout << BLUE << getTotalAmount() << RESET << ";deposits:";
	std::cout << BLUE << getNbDeposits() << RESET << ";withdrawals:";
	std::cout << BLUE << getNbWithdrawals() << RESET << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << BLUE << Account::_accountIndex << RESET;
	std::cout << ";p_amount:" << BLUE << Account::_amount << RESET;
	std::cout << ";deposit:" << BLUE << deposit << RESET;
	Account::_amount += deposit;
	_totalAmount += deposit;
	if (deposit != 0)
	{
		Account::_nbDeposits++;
		_totalNbDeposits++;
	}
	std::cout << ";amount:" << BLUE << Account::_amount << RESET;
	std::cout << ";nb_deposits:" << BLUE << Account::_nbDeposits << RESET;
	std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << BLUE << Account::_accountIndex << RESET;
	std::cout << ";p_amount:" << BLUE << Account::_amount << RESET;
	if (withdrawal > checkAmount())
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	std::cout << ";withdrawal:" << BLUE << withdrawal << RESET;
	Account::_amount -= withdrawal;
	_totalAmount -= withdrawal;
	Account::_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << ";amount:" << BLUE << Account::_amount << RESET;
	std::cout << ";nb_withdrawals:" << BLUE << Account::_nbWithdrawals << RESET;
	std::cout << std::endl;
	return true;
}
int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << BLUE << Account::_accountIndex << RESET << ";amount:";
	std::cout << BLUE << Account::_amount << RESET << ";deposits:";
	std::cout << BLUE << _nbDeposits << RESET << ";withdrawals:";
	std::cout << BLUE << _nbWithdrawals << RESET << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t		date;
	struct tm	*timestamp;
	char		buffer[19];

	time(&date);
	//std::cout << "date: " << date << std::endl;
	timestamp = localtime(&date);
	//std::cout << "timestamp: " << timestamp << std::endl;
	strftime(buffer, 19, "[%G%m%d_%H%M%S] ", timestamp);
	std::cout << buffer;
}