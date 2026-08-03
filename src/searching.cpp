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
void binarySearch() {
    int n;
    cout << "\n--- Binary Search ---\n";
    cout << "Enter number of elements: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter " << n << " elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter element to search: ";
    cin >> target;
    int left = 0;
    int right = n - 1;
    int index = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            index = mid;
            break;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
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
void firstOccurrence() {

    int n;

    cout << "\n--- First Occurrence ---\n";
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter elements in sorted order: ";

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int target;

    cout << "Enter target: ";
    cin >> target;

    int left = 0;
    int right = n - 1;
    int ans = -1;

    while(left <= right){

        int mid = left + (right - left) / 2;

        if(arr[mid] == target){

            ans = mid;
            right = mid - 1;

        }
        else if(arr[mid] < target){

            left = mid + 1;

        }
        else{

            right = mid - 1;

        }

    }
    if(ans == -1)
        cout << "Element not found\n";
    else
        cout << "First occurrence is at index " << ans << endl;

    delete[] arr;
}
void lastOccurrence() {

    int n;

    cout << "\n--- Last Occurrence ---\n";
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter elements in sorted order: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;

    cout << "Enter target: ";
    cin >> target;

    int left = 0;
    int right = n - 1;
    int ans = -1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {

            ans = mid;
            left = mid + 1;

        }
        else if (arr[mid] < target) {

            left = mid + 1;

        }
        else {

            right = mid - 1;

        }
    }

    if (ans == -1)
        cout << "Element not found.\n";
    else
        cout << "Last occurrence is at index " << ans << endl;

    delete[] arr;
}
void countOccurrences() {

    int n;

    cout << "\n--- Count Occurrences ---\n";
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter elements in sorted order: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;

    cout << "Enter target: ";
    cin >> target;

    int first = -1;
    int last = -1;

    // Find First Occurrence
    int left = 0;
    int right = n - 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            first = mid;
            right = mid - 1;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    // Find Last Occurrence
    left = 0;
    right = n - 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            last = mid;
            left = mid + 1;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (first == -1) {
        cout << "Element not found.\n";
    }
    else {
        cout << "Element occurs "
             << last - first + 1
             << " times.\n";
    }

    delete[] arr;
}