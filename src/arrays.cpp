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