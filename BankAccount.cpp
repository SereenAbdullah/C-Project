#include "BankAccount.h"
#include <string>
using namespace std;

BankAccount::BankAccount()
{
	account_ID=0;
	First_name="";
	Surname="";
	Account_Type="";
	Account_Balance=0;
}
BankAccount::BankAccount(const BankAccount &obj)
{   
	account_ID=obj.account_ID;
	First_name=obj.First_name;
	Surname=obj.Surname;
	Account_Type=obj.Account_Type;
	Account_Balance=obj.Account_Balance;
}

BankAccount::~BankAccount()
{  
  static int i=0;
  cout<<"\nThe Destructor has been called "<<i+1<<":\n";
  cout<<"The account "<<First_name<<" "<<Surname<<" has been closed \n";
   i++;
}
//setters
void BankAccount::setaccount_ID(int x)
{
	account_ID=x;
}

 void BankAccount::setFirst_name(string x)
 {
	 First_name=x;
 }

  void BankAccount::setSurname(string x)
  {
	  Surname=x;
  }

 void BankAccount::setAccount_Type(string x)
 {  
	 Account_Type=x;
 }

 void BankAccount::setAccount_Balance(double x)
 {    if( x < 0)
	{   cout<<"\nPlease enter the Value again:";
	    cin>>x;
	}
	 Account_Balance=x;
 }

 int BankAccount::getaccount_ID()
{
	return account_ID;
}

string BankAccount::getFirst_name()
{
	return First_name;
}

string BankAccount::getSurname()
{
	return Surname;
}

string BankAccount::getAccount_Type()
{
	return Account_Type;
}

double BankAccount::getAccount_Balance()
{
	return Account_Balance;
}
void BankAccount::create(int id ,string Fname,string Sname ,string type ,double amount)
{
	account_ID=id;
	First_name=Fname;
	Surname=Sname;
	Account_Type=type;
	 if(amount < 0)
	{   cout<<"\nPlease enter the Value again:";
	    cin>>amount;
	}
	Account_Balance=amount;
}

void BankAccount::print()
{
	cout<<"\n The Account ID is "<<account_ID<<"\n";
	cout<<"\n The First Name is "<<First_name<<"\n";
	cout<<"\n The Surname is "<<Surname<<"\n";
	cout<<"\nThe Account Type is: "<<Account_Type<<"\n";
	cout<<"\nThe Account Balance is: "<<Account_Balance<<"\n";
}


void BankAccount::Deposit_amount(double d)
{
 Account_Balance+=d;
 cout<<"\n"<<d<<" JOD has been credited to your "<< Account_Type<<" account\n";
 cout<<"\nYour availble balance is "<<Account_Balance<<" JOD"<<"\n";
}

int BankAccount::Withdraw_amount(double w)
{
 if( Balance_Enquiry()< w)
 {
	 Account_Balance-=w;
	 return 0;
 }

 else
 {
 Account_Balance-=w;
 return 1;
 }
}
double  BankAccount::Balance_Enquiry()
{ 
  return Account_Balance;
}

void BankAccount::List_account_detail()
{
	cout<<"\n The First Name is "<<First_name<<"\n";
	cout<<"\n The Surname is "<<Surname<<"\n";
}
