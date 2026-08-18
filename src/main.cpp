#include <iostream>
#include "../include/searching.h"
#include "../include/strings.h"
#include "../include/sorting.h"
#include "../include/arrays.h"
using namespace std;

void showMenu() {
    cout << "\n";
    cout << "==============================\n";
    cout << "          ALGOFORGE           \n";
    cout << "==============================\n";
    cout << "1. Searching Algorithms\n";
    cout << "2. Sorting Algorithms\n";
    cout << "3. Number Theory\n";
    cout << "4. Arrays\n";
    cout << "5. Strings\n";
    cout << "6. Stack & Queue\n";
    cout << "7. Linked Lists\n";
    cout << "8. Trees\n";
    cout << "9. Graphs\n";
    cout << "10. Dynamic Programming\n";
    cout << "11. Algorithm Benchmark\n";
    cout << "0. Exit\n";
    cout << "==============================\n";
    cout << "Enter your choice: ";
}
void searchingMenu() {
    int choice;
    do {
        cout << "\n===== Searching Algorithms =====\n";
        cout << "1. Linear Search\n";
        cout << "2. Binary Search\n";
        cout << "3. First Occurrence\n";
        cout << "4. Last Occurrence\n";
        cout << "5. Count Occurrences\n";
        cout << "6. Lower Bound\n";
        cout << "7. Upper Bound\n";
        cout << "0. Back\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                linearSearch();
                break;
            case 2:
                binarySearch();
                break;
            case 3:
                firstOccurrence();
                break;
            case 4:
                lastOccurrence();
                break;
            case 5:
                countOccurrences();
                break;
            case 6:
                lowerBound();
                break;
            case 7:
                upperBound();
                break;
            case 0:
                break;
            default:
                cout << "Invalid Choice!\n";
        }
    } while (choice != 0);
}
void sortingMenu() {
    int choice;
    do {
        cout << "\n===== Sorting Algorithms =====\n";
        cout << "1. Bubble Sort\n";
        cout << "2. Selection Sort\n";
        cout << "3. Insertion Sort\n";
        cout << "4. Merge Sort\n";;
        cout << "5. Quick Sort\n";
        cout << "0. Back\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                bubbleSort();
                break;
                case 2:
    selectionSort();
    break;
    case 3:
    insertionSort();
    break;
    case 4:
    mergeSortDemo();
    break;
    case 5:
    quickSortDemo();
    break;
    case 0:
    break;
            default:
                cout << "Invalid Choice!\n";
        }
    } while (choice != 0);
}
void arraysMenu() {
    int choice;
    do {
        cout << "\n===== Arrays =====\n";
        cout << "1. Reverse Array\n";
        cout << "2. Second Largest Element\n";
        cout << "3. Rotate Array\n";
        cout << "4. Maximum Subarray Sum\n";
        cout << "5. Maximum & Minimum Element\n";
        cout << "0. Back\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                reverseArray();
                break;
            case 2:
                   secondLargest();
                    break;    
                case 3:
                   rotateArray();
                    break;
                case 4:
                   maxSubarraySum();
                    break;
                case 5:
                   findMaxMin();
                     break;
            case 0:
                break;
            default:
                cout << "Invalid Choice!\n";}
    } while(choice != 0);}

    void stringsMenu() {
    int choice;
    do {
        cout << "\n===== String Algorithms =====\n";
        cout << "1. Palindrome Check\n";
        cout << "0. Back\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                palindromeCheck();
                break;
            case 0:
                break;
            default:
                cout << "Invalid Choice!\n";
        }
    } while (choice != 0);}

int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                searchingMenu();
                break;
            case 2:
                sortingMenu();
                break;
            case 3:
                cout << "Number Theory - Coming Soon!\n";
                break;
            case 4:
                 void arraysMenu();
           case 5:
                 stringsMenu();
                 break;
            case 6:
                cout << "Stack & Queue - Coming Soon!\n";
                break;
            case 7:
                cout << "Linked Lists - Coming Soon!\n";
                break;
            case 8:
                cout << "Trees - Coming Soon!\n";
                break;
            case 9:
                cout << "Graphs - Coming Soon!\n";
                break;
            case 10:
                cout << "Dynamic Programming - Coming Soon!\n";
                break;
            case 11:
                cout << "Algorithm Benchmark - Coming Soon!\n";
                break;
            case 0:
                cout << "\nThanks for using AlgoForge!\n";
                break;
            default:
                cout << "Invalid Choice! Try Again.\n";
        }
    } while (choice != 0);
    return 0;
}