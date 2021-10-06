/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 03:02:50 by jceia             #+#    #+#             */
/*   Updated: 2021/10/06 03:38:47 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
    : _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
    _nbAccounts++;
    makeDeposit(initial_deposit);
}
Account::~Account( void )
{
    _nbAccounts--;
    if (_amount > 0)
        makeWithdrawal(_amount);
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

int  Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )
{
    std::cout << "Number of accounts:\t" << _nbAccounts << std::endl;
    std::cout << "Total amount:\t" << _totalAmount << std::endl;
    std::cout << "Total number of deposits:\t" << _totalNbDeposits << std::endl;
    std::cout << "Total number of withdrawals\t" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
}
bool	Account::makeWithdrawal( int withdrawal )
{
    if (withdrawal > _amount)
        return false;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    return true;
}
int		Account::checkAmount( void ) const
{
    return _amount;
}
void	Account::displayStatus( void ) const
{
    
}