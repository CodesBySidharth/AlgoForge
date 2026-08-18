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