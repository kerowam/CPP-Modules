/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 22:20:16 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/05 00:27:06 by gfredes-         ###   ########.fr       */
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

}
int	Account::getTotalAmount( void )
{

}
int	Account::getNbDeposits( void )
{

}
int	Account::getNbWithdrawals( void )
{

}
void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << BLUE << _nbAccounts << RESET << ";total:";
	std::cout << BLUE << _totalAmount << RESET << ";deposits:";
	std::cout << BLUE << _totalNbDeposits << RESET << ";withdrawals:";
	std::cout << BLUE << _totalNbWithdrawals << RESET << std::endl;
}

void	Account::makeDeposit( int deposit )
{

}

bool	Account::makeWithdrawal( int withdrawal )
{


}
int		Account::checkAmount( void ) const
{

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