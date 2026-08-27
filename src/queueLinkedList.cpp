#include <iostream>
#include "../include/queueLinkedList.h"
using namespace std;
struct Node {
    int data;
    Node* next;
};
void queueUsingLinkedList() {
    Node* front = nullptr;
    Node* rear = nullptr;
    int choice;
    int value;
    do {
        cout << "\n===== Queue Using Linked List =====\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Front\n";
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
                newNode->next = nullptr;
                if (rear == nullptr) {
                    front = rear = newNode;
                }
                else {
                    rear->next = newNode;
                    rear = newNode;
                }
                cout << "Value inserted successfully.\n";
                break;
            }
            case 2:
                if (front == nullptr) {
                    cout << "Queue Underflow!\n";
                }
                else {
                    Node* temp = front;
                    cout << "Dequeued value: "
                         << front->data << endl;
                    front = front->next;
                    if (front == nullptr)
                        rear = nullptr;
                    delete temp;
                }
                break;
            case 3:
                if (front == nullptr) {
                    cout << "Queue is empty.\n";
                }
                else {
                    cout << "Front element: "
                         << front->data << endl;
                }
                break;
            case 4:
                if (front == nullptr) {
                    cout << "Queue is empty.\n";              }
                else {
                    Node* temp = front;
                    cout << "Queue: ";
                    while (temp != nullptr) {
                        cout << temp->data << " ";
                        temp = temp->next;
                    }
                    cout << endl;
                }
                break;
            case 0:
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 0);
    while (front != nullptr) {
        Node* temp = front;
        front = front->next;
        delete temp;
    } }