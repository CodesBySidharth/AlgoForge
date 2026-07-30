#include <iostream>
#include "../include/searching.h"

using namespace std;
void linearSearch() {
    int n;
    cout << "\n--- Linear Search ---\n";
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter element to search: ";
    cin >> target;
    int index = -1;
    for (int i = 0; i < n; i++) {

        if (arr[i] == target) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        cout << "Element found at index " << index << "\n";
    }
    else {
        cout << "Element not found.\n";
    }
    delete[] arr;
}