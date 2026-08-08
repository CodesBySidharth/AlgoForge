#include <iostream>
#include "../include/sorting.h"
using namespace std;
void bubbleSort() {
    int n;
    cout << "\n--- Bubble Sort ---\n";
    cout << "Enter number of elements: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            } }}
    cout << "\nSorted Array:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    delete[] arr;
}
void selectionSort() {
    int n;
    cout << "\n--- Selection Sort ---\n";
    cout << "Enter number of elements: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];}
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }}
        if (minIndex != i) {

            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;}
    }
    cout << "\nSorted Array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";}
    cout << endl;
    delete[] arr;
}
void insertionSort() {
    int n;
    cout << "\n--- Insertion Sort ---\n";
    cout << "Enter number of elements: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];}
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;}
    cout << "\nSorted Array:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";}
    cout << endl;
    delete[] arr;}