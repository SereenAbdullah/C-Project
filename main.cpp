#include "BankAccount.h"

int main(){
 {
	int id, cnt = 0, high, maxx = 0, count = 0;
	string Fname, Sname, type;
	double amount;
	BankAccount obj;
	BankAccount acc1[5] = {{obj}, {obj}, {obj}, {obj}, {obj}};
	//Q1:
	    for (int i = 0; i < 5; i++) {
		cout << "\nAccount (" << i + 1 << ")" << "\n";
		cout << "\nPlease enter the ID : ";
		cin >> id;
     	cout << "\nPlease enter the first name: ";
		cin >> Fname;
		cout << "\nPlease enter the surname: ";
		cin >> Sname;
		cout << "\nPlease enter the type of the account: ";
		cin >> type;
		while (type != "Saving" && type != "Current" && type != "saving" &&
			   type != "current") {
			cout << "\nPlease Enter one of these choices Saving or Current:";
			cin >> type;
		}
		cout << "\nEnter the balance of the account: ";
		cin >> amount;
		acc1[i].create(id, Fname, Sname, type, amount);
	}
	//Q2:
	cout << "\n----------------------------------------------------\n";
	int Sacc;
	double money1;
	cout << "\nplease enter the number of the account you want to deposit to\n";
	cin >> Sacc;
	cout << "\nplease enter the amount you want to deposit\n";
	cin >> money1;
	acc1[Sacc - 1].Deposit_amount(money1);
    
	//Q3:
	cout << "\n----------------------------------------------------\n";
	cout << "\nplease enter the number of the account you want to withdraw "
			"from\n";
	cin >> Sacc;
	cout << "\nplease enter the amount you want to withdraw\n";
	cin >> money1;

	if (acc1[Sacc - 1].Withdraw_amount(money1) == 0)
	{   cout<<"\nThis is an overdraft operation\n";
		cout << "\n"<< money1 << " JOD has been debited from your "<<acc1[Sacc-1].getAccount_Type()<<"account\n";
		cout << "\nYour availble balance is "<< acc1[Sacc - 1].getAccount_Balance() << " JOD"<< "\n";
	}
	else 
	{
		cout << "\n"<< money1 << " JOD has been debited from your "<<acc1[Sacc-1].getAccount_Type()<<"account\n";
		cout << "\nYour availble balance is " << acc1[Sacc - 1].getAccount_Balance() << " JOD"<< "\n";
	}

	//Q4:
	cout << "\n----------------------------------------------------\n";
	for (int i = 0; i < 5; i++) {
		if (acc1[i].getAccount_Balance() > maxx) {
			maxx = acc1[i].getAccount_Balance();
			high = i;
		}
	}
	cout << "\n The account that has the highest balance is.....\n";
	acc1[high].print();

	//Q5:
	cout << "\n----------------------------------------------------\n";
	for (int i = 0; i < 5; i++) {
		if (acc1[i].Balance_Enquiry() <= 0)
			count++;
	}
	cout << "\nThe Number of Over Draft account is: " << count << "\n";

    cout<<"\nThe Destructor has been called\n";
	return 0;
 }
}