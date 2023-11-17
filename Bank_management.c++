#include <iostream>
using namespace std;
class Account
{
    long int account_no;
    string name;
    double balance;

public:
    Account(long int no, string n)
    {
        balance = 0;
        account_no = no;
        name = n;
    }
    void credit(double bal)
    {
        balance += bal;
    }
    void debit(double bal)
    {
        if (balance < bal)
        {
            cout << "Insufficient Balance in your account";
        }
        else
        {
            balance -= bal;
            cout << "Account debited:" << bal << endl;
            cout << "Remaining Amount" << balance << endl;
        }
    }
    void display()
    {
        cout << "Account Number: " << account_no << endl;
        cout << "Account Holder Name: " << name << endl;
        cout << "Current Balance: " << balance << endl;
    }
    void transation()
    {
        int choice = 0, ch = 0;
        double bal = 0.0;
        do
        {
            
            cout << "1.Credit Amount" << endl;
            cout << "2.Debit Amount" << endl;
            cout << "3.Exit" << endl;
            cout << "Enter choice: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Enter Amount: ";
                cin >> bal;
                credit(bal);
                display();
                break;
            case 2:
                cout << "Enter Amount: ";
                cin >> bal;
                debit(bal);
                display();
                break;
            case 3:
                cout << "Thank you!!" << endl;
                exit(0);
                break;
            default:
                cout << "Invalid Choice!! Please enter again." << endl;
            }
            cout << "Do you want to transact again(1/0): ";
            cin >> ch;
        } while (ch == 1);
    }
};
int main()
{
    long int account_no;
    string name;
    cout << "Enter Account Number: ";
    cin >> account_no;
    cout << "Enter Account Holder Name: ";
    cin >> name;
    Account acc(account_no, name);
    acc.transation();
    cout << "Thank you for visiting!!" << endl;
    return 0;
}
