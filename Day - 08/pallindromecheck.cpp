#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s, int left, int right) {
    if (left >= right) {
        return true;
    }
    if (s[left] != s[right]) {
        return false;
    }
    return isPalindrome(s, left + 1, right - 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    if (isPalindrome(str, 0, str.length() - 1))
        cout << str << " is a Palindrome." << endl;
    else
        cout << str << " is not a Palindrome." << endl;
        
    return 0;
}