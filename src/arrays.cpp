#include <iostream>
#include "../include/arrays.h"
using namespace std;

void reverseArray() {
    int n;
    cout << "\n--- Reverse Array ---\n";
    cout << "Enter number of elements: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int left = 0;
    int right = n - 1;
    while(left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    cout << "\nReversed Array:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    delete[] arr;
}
void secondLargest() {
    int n;
    cout << "\n--- Second Largest Element ---\n";
    cout << "Enter number of elements: ";
    cin >> n;
    if(n < 2) {
        cout << "Need at least 2 elements.\n";
        return;}
    int* arr = new int[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];}
    int largest = arr[0];
    int second = -1;
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i]; }}
    if(second == -1)
        cout << "No second largest element found.\n";
    else
        cout << "Second Largest = " << second << endl;
    delete[] arr;
}
void rotateArray() {
    int n;
    cout << "\n--- Array Rotation ---\n";
    cout << "Enter number of elements: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];}
    int k;
    cout << "Enter number of rotations: ";
    cin >> k;
    k = k % n;
    int* temp = new int[n];
    for(int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    cout << "\nRotated Array:\n";
    for(int i = 0; i < n; i++) {
        cout << temp[i] << " ";
    }
    cout << endl;
    delete[] arr;
    delete[] temp;
}