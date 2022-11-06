#include <iostream>
#include <stdlib.h>
using namespace std;

void accDash()
{
	cout << "----------Account Dashboard----------\n" << endl;
	cout << "1| Account Information \t\t 2| Deposit" << endl;
	cout << "3| More Services \t\t 4| Withdrawal" << endl;
	cout << "5| Balance Enquiry \t\t 6| Pin Change" << endl;
	cout << "7| Exit (LogOut)" << endl;
	cout << "--------------------------------------" <<endl;
	
}

int main ()
{
	
	
	int input, balance = 50, pin= 54123;
	double deposit, withdraw;
	char name[32];
	
	do
	{
	accDash();
	cout << "Input: ";
	cin >> input;
	system ("cls");
	
	
		switch (input)
		{
			case 1:
				cout << "Account Name: Mbonisi Mtunzi"<< endl;
				break;
			
			case 2:
				cout << "Enter Amount : $";
				cin >> deposit;
				balance += deposit; // balance = balance + deposit
				cout << "\nYou Have Successfully Deposited : $" << deposit;
				cout << endl << endl; 
				break;
				
			case 3:
				cout << "This Feature Is Under Construction" << endl;
				break;
				
			case 4:
				cout << "Enter Withdrawal Amount: $";
				cin >> withdraw;
				if (withdraw >= balance)
				{
					cout << "\nINSUFFICIENT FUNDS!! to peform this Transaction" << endl;
				}
				else
				balance -= withdraw;
				cout << "\nYou Have Successfully Withdrawn : $" << withdraw;
				cout << endl;
				break;
				
			case 5:
				cout << "\nYour Balance is : $" << balance;
				cout << "\nDo You Wish To Make A Deposit" << endl;
				break;
				
			case 6:
				int oldPin;
				cout << "\nConfirm Previous Pin: >> ";
				cin >> oldPin;
			
				
				if (oldPin == pin)
				{
					cout << "Enter New Pin: >> ";
					cin >> pin;
				}
				else 
				{
				cout << "\nINCORRECT PIN - Try Again"<< endl;}
				
				cout << "\nYou Have Successfully Changed Your Pin" << endl;
		        
				break;
		break;		
		} 
		
	} while (input != 7);
	
	
	
	return 0;
}
