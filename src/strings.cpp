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
    void characterFrequency() {
    string s;
    cout << "\n--- Character Frequency ---\n";
    cout << "Enter a string: ";
    cin >> s;
    int freq[256] = {0};
    for (int i = 0; i < s.length(); i++) {
        freq[(unsigned char)s[i]]++;
    }
    cout << "\nCharacter Frequencies:\n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << (char)i << " : " << freq[i] << endl;} }
}
void anagramCheck() {
    string s1, s2;
    cout << "\n--- Anagram Check ---\n";
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;
    if (s1.length() != s2.length()) {
        cout << "Not Anagrams\n";
        return; }
    int freq[256] = {0};
    for (int i = 0; i < s1.length(); i++) {
        freq[(unsigned char)s1[i]]++;
        freq[(unsigned char)s2[i]]--;
    }
    for (int i = 0; i < 256; i++) {

        if (freq[i] != 0) {
            cout << "Not Anagrams\n";
            return;}}
    cout << "Anagrams\n";
}