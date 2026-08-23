#include <iostream>
#include "../include/stack.h"

using namespace std;
void stackUsingArray() {
    int size;
    cout << "\n--- Stack Using Array ---\n";
    cout << "Enter stack size: ";
    cin >> size;
    int* stack = new int[size];
    int top = -1;
    int choice;
    int value;
    do {
        cout << "\n===== Stack Menu =====\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "0. Back\n";
       cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                if (top == size - 1) {
                    cout << "Stack Overflow!\n";}
                else {
                    cout << "Enter value: ";
                    cin >> value;
                    stack[++top] = value;
                    cout << "Value pushed successfully.\n";
                }
                break;
            case 2:
                if (top == -1) {
                    cout << "Stack Underflow!\n";
                }
                else {
                    cout << "Popped value: " << stack[top] << endl;
                    top--;}
                break;
            case 3:
              if (top == -1) {
                    cout << "Stack is empty.\n";
                }
                else {
                    cout << "Top element: " << stack[top] << endl;}
                break;
            case 4:
                if (top == -1) {
                    cout << "Stack is empty.\n";
                }
                else {
                    cout << "Stack: ";
                    for (int i = top; i >= 0; i--) {
                        cout << stack[i] << " ";
                    }
                    cout << endl;}
                break;
            case 0:
                break;
            default:
                cout << "Invalid choice!\n"; }
    } while (choice != 0);
    delete[] stack;}