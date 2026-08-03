#include <iostream>
#include "../include/searching.h"

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

    cout << "\n===== Searching Algorithms =====\n";
    cout << "1. Linear Search\n";
    cout << "2. Binary Search\n";
   cout << "3. First Occurrence\n";
   cout << "4. Last Occurrence\n";
   cout << "5. Count Occurrences\n";
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
        case 0:
            break;

        default:
            cout << "Invalid choice.\n";
    }
}
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
                cout << "Sorting Algorithms - Coming Soon!\n";
                break;
            case 3:
                cout << "Number Theory - Coming Soon!\n";
                break;
            case 4:
                cout << "Arrays - Coming Soon!\n";
                break;
            case 5:
                cout << "Strings - Coming Soon!\n";
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
                cout << "Thanks for using AlgoForge!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";}
    } while (choice != 0);
    return 0;
}