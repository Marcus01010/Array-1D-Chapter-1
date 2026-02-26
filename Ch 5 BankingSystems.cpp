#include <iostream>
using namespace std;

struct BankAccount
{
int account_number;
char account_holder_name[50];
float balance;
};

int main()
{
BankAccount account;

cout << "Enter account number: ";
cin >> account.account_number;

cin.ignore();

cout << "Enter account holder name: ";
cin.getline(account.account_holder_name, 50);

cout << "Enter account balance: ";
cin >> account.balance;

cout << "\n--- Account Details ---\n";
cout << "Account Number: " << account.account_number << endl;
cout << "Account Holder: " << account.account_holder_name << endl;
cout << "Balance: " << account.balance << endl;

return 0;
}
