
#include "Account.hpp"
#include "iostream"

int Account::_nbAccounts = 0;
int Account:: _totalAmount = 0;
int Account:: _totalNbDeposits = 0;
int Account:: _totalNbWithdrawals = 0;


Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += initial_deposit;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
    _nbAccounts--;
}
    
int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}

int Account:: getNbDeposits()
{
    return (_totalNbDeposits);
}
int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}


void	Account::displayAccountsInfos( void )
{

    _displayTimestamp();
    std::cout << "index:" << _nbAccounts << "total" << _totalAmount << "deposits" << _totalNbDeposits << "withdrawals" << _totalNbWithdrawals << std::endl;

}


void	Account::displayStatus( void ) const
{

     _displayTimestamp();
    std::cout << "index:" << _accountIndex << "total" << _amount << "deposits" << _nbDeposits << "withdrawals" << _nbWithdrawals << std::endl;




}

/*void	Account::makeDeposit( int deposit )
{

}

bool	Account::makeWithdrawal( int withdrawal )
{

}*/