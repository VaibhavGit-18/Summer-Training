#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(int amount) {
        balance += amount;
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;
    acc.deposit(500);
    cout << "Current Balance: " << acc.getBalance() << endl;
    return 0;
}