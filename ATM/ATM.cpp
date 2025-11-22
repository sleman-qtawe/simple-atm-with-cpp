using namespace std;

#include <iostream>


double balance = 0.0;

void showMenu();
void depositFun();
void withdrawFun();
int main()
{
    int selection;

    do {
        showMenu();
        cout << "Selection: ";
        cin >> selection;

        switch (selection)
        {
        case 1:
            cout << "\nYour Balance: $" << balance;
            break;
        case 2:
            depositFun();
            break;
        case 3:
            withdrawFun();
            break;
        case 4:
            cout << "\n goodby :)";
            exit(1);
            //default:

        }
    } while (selection != 4);


}
void showMenu()
{
    cout << "\n\n*****ATM BANKING SYSTEM*****\n\n";
    cout << "\n < 1 > Check Balane";
    cout << "\n < 2 > Deposit";
    cout << "\n < 3 > Withdraw";
    cout << "\n < 4 > Exit";
    cout << "\n\n";
}

void depositFun()
{
    double depositAmount = 0.0;
    cout << "\nDeposit Amount: ";
    cin >> depositAmount;

    if (depositAmount <= 0) {
        cout << "Invalid amount! Please enter a positive number." << endl;
    }
    else {
        balance += depositAmount;
        cout << "Deposit successful! New Balance: " << balance << endl;
    }
}
void withdrawFun()
{
    double withdrawAmount = 0.0;
    cout << "\nWithdraw Amount: ";
    cin >> withdrawAmount;
    if (withdrawAmount <= balance) {
        balance -= withdrawAmount;
        cout << "Withdrawal successful. Remaining Balance: " << balance;
    }

    else
    {
        cout << "Not enough balance!";
    }

}
