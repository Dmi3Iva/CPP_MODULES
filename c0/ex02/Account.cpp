#include <ctime>
#include <iostream>
#include <iomanip>
#include "Account.hpp"

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	++_nbAccounts;
	_nbWithdrawals = 0;
	_nbDeposits = 0;

	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			  << ";amount:" << _amount << ";created"<<std::endl;
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
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts
		<< ";total:" << _totalAmount <<
		";deposits:" << _totalNbDeposits <<
		";withdrawals:" << 	_totalNbWithdrawals <<std::endl;
}


Account::~Account( void )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			  << ";amount:" << _amount << ";closed"<<std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			  << ";p_amount:" << _amount << ";deposit:" << deposit
			  <<  ";amount:" << _amount + deposit
			  << ";nb_deposits:" << ++_nbDeposits << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	++_totalNbDeposits;
}

//TODO
bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			  << ";p_amount:" << _amount;
	if (_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	else
	{
		std::cout << ";withdrawal:" << withdrawal
			<< ";amount:" << _amount - withdrawal
			<< ";nb_withdrawals:" << ++_nbWithdrawals << std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		++_totalNbWithdrawals;
		return true;
	}
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			  << ";amount:" << _amount << ";deposits:" << _nbDeposits
			  <<  ";withdrawals:" << _nbWithdrawals <<std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);

	std::cout << "[" << now->tm_year + 1900;
	std::cout << std::setw(2) << std::setfill('0')
		<< now->tm_mon + 1
		<< now->tm_mday;
	std::cout << "_";
	std::cout << std::setw(2) << std::setfill('0')
		<< now->tm_hour + 1
		<< now->tm_min << now->tm_sec;
	std::cout << "]";
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
