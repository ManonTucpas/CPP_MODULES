/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlecuyer@student.42.fr <mlecuyer>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:09:08 by mlecuyer          #+#    #+#             */
/*   Updated: 2021/12/08 14:43:45 by mlecuyer@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

Account::Account( int initial_deposit ) : _accountIndex(Account::_nbAccounts++), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";created" << std::endl;
    _totalAmount += _amount;
    return ;
     
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";closed" << std::endl;
    return ;
}

void	Account::_displayTimestamp( void )
{
   time_t now = time(0);
   
   tm *ltm = localtime(&now);

   std::cout << "[" << 1900 + ltm->tm_year;
   std::cout << std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon;
   std::cout << std::setfill('0') << std::setw(2)  << ltm->tm_mday;
   std::cout << "_";
   std::cout << std::setfill('0') << std::setw(2) << ltm->tm_hour;
   std::cout << std::setfill('0') << std::setw(2) << ltm->tm_min;
   std::cout << std::setfill('0') << std::setw(2) << ltm->tm_sec;
   std::cout << "] ";
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts;
    std::cout << ";total:" << Account::_totalAmount;
    std::cout << ";deposits:" << Account::_totalNbDeposits;
    std::cout << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
    
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << Account::_accountIndex;
    std::cout << ";amount:" << Account::_amount;
    std::cout << ";deposits:" << Account::_nbDeposits;
    std::cout << ";withdrawals:" << Account::_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" << Account::_accountIndex;
    std::cout << ";p_amount:" << Account::_amount;
    std::cout << ";deposit:" << deposit;
    _amount += deposit;
    Account::_totalAmount += deposit;
    _nbDeposits++;
    Account::_totalNbDeposits++;
    std::cout << ";amount:" << Account::_amount;
    std::cout << ";nb_deposits:" << Account::_nbDeposits << std::endl;   
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << Account::_accountIndex;
    std::cout << ";p_amount:" << Account::_amount;
    std::cout << ";withdrawal:";
    if (withdrawal > _amount)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    else
        std::cout << withdrawal;
    _amount -= withdrawal;
    Account::_totalAmount -= withdrawal;
    _nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    std::cout << ";amount:" << Account::_amount;
    std::cout << ";nb_withdrawals:" << Account::_nbWithdrawals << std::endl;
    return (true);
}

/* INIT STATIC TO ZERO */

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0; 
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}