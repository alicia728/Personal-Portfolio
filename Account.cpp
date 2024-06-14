#include <iostream>
using namespace std;

class Account
{
private:
    string bankName;
    string accountHolder;
    int accountNumber;
    double bankBalance;
public:
    void setBankName(string);
    void setAccountHolder(string);
    void setAccoutNumber(int);
    void setBankBalance(double);
    string getBankName();
    string getAccountHolder();
    int getAccountNumber();
    double getBankBalance();

};
void Account::setBankName(string bName)
{
    bankName = bName;
}
void Account::setAccountHolder(string aHolder)
{
    accountHolder = aHolder;
}
void Account::setAccountNumber(int accNum)
{
    accountNumber = accNum;
}
void Account::setBankBalance(double balance)
{
    bankBalance = balance;
}
string Account::getName()
{
    return bankName;
}
string Account::getAccountHolder()
{
    return accountHolder;
}
int Account::getAccountNumber()
{
    return accountNumber;
}
double Account::getBankBalance()
{
    return bankBalance;
}
int main()
{
    Account details;
    details.setBankName("First National Bank");
    details.setAccountHolder("Alicia Mandlazi");
    details.setAccountNumber("242424");
    details.setBankBalance("R216.78");
    cout<< "Bank name: "<<details.getBankName()<<endl;
    cout<< "Account holder: "<<details.getAccountHolder()<<endl;
    cout<< "Account number: "<<details.getAccountNumber()<<endl;
    cout<< "Bank balance: "<<details.getBankBalance()<<endl;
    return 0;
}

