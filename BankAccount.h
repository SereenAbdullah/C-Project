#ifndef BankAccount_h
#define BankAccount_h
#include <iostream>
#include<string>
using namespace std;

class BankAccount 
{
    private:
    int account_ID;
    string First_name;
    string Surname;
    string Account_Type;
    double Account_Balance;
    
    public:
   
	BankAccount();
	BankAccount(const BankAccount &obj);
    ~BankAccount();

   
    void setaccount_ID(int);
    void setFirst_name(string);
    void setSurname(string);
    void setAccount_Type(string);
    void setAccount_Balance(double);

    
    int getaccount_ID() ;
    string getFirst_name() ;
    string getSurname();
    string getAccount_Type();
    double getAccount_Balance();
	
	void create(int,string,string,string,double);

    void print();
    
    void Deposit_amount(double);

    int  Withdraw_amount(double);

    double Balance_Enquiry();

    void List_account_detail();
    
};
#endif