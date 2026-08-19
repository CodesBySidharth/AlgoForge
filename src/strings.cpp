#include <iostream>
#include <string>
#include "../include/strings.h"
using namespace std;

void palindromeCheck() {
    string s;
    cout << "\n--- Palindrome Check ---\n";
    cout << "Enter a string: ";
    cin >> s;
    int left = 0;
    int right = s.length() - 1;
    bool palindrome = true;
    while (left < right) {
        if (s[left] != s[right]) {
            palindrome = false;
            break;
        }
        left++;
        right--;
    }
    if (palindrome)
        cout << "The string is a palindrome.\n";
    else
        cout << "The string is not a palindrome.\n";}
   void reverseString() {
    string s;
    cout << "\n--- Reverse String ---\n";
    cout << "Enter a string: ";
    cin >> s;
    int left = 0;
    int right = s.length() - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    cout << "Reversed String = " << s << endl;}     