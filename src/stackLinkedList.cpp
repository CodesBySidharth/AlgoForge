#include <iostream>
#include "../include/stackLinkedList.h"

using namespace std;

struct Node {
    int data;
    Node* next;
};

void stackUsingLinkedList() {
    Node* top = nullptr;
    int choice;
    int value;
    do {
        cout << "\n===== Stack Using Linked List =====\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "0. Back\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
           case 1: {
                cout << "Enter value: ";
                cin >> value;
                Node* newNode = new Node();
               newNode->data = value;
                newNode->next = top;
                top = newNode;
                cout << "Value pushed successfully.\n";
                break;}
            case 2:
                if (top == nullptr) {
                    cout << "Stack Underflow!\n"; }
                else {
                    Node* temp = top;
                    cout << "Popped value: "
                         << top->data << endl;
                    top = top->next;
                    delete temp;  }
                break;
            case 3:
            if (top == nullptr) {
                    cout << "Stack is empty.\n"; }
                else {
                    cout << "Top element: "
                         << top->data << endl; }
                break;
            case 4:
                if (top == nullptr) {
                    cout << "Stack is empty.\n"; }
                else {
                    Node* temp = top;
                    cout << "Stack: ";
                    while (temp != nullptr) {
                        cout << temp->data << " ";
                        temp = temp->next; }
                    cout << endl;  }
                break;
            case 0:
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 0);
    while (top != nullptr) {
        Node* temp = top;
        top = top->next;
        delete temp; }}