#include <iostream>
using namespace std;

class BankAccount {
    int balance;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(int amt) {
        balance += amt;
    }

    void withdraw(int amt) {
        if (amt <= balance) {
            balance -= amt;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    void display() {
        cout << "Final Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int depAmt, withAmt;

    cout << "Enter deposit amount: ";
    cin >> depAmt;
    account.deposit(depAmt);

    cout << "Enter withdrawal amount: ";
    cin >> withAmt;
    account.withdraw(withAmt);

    account.display();

    return 0;
}