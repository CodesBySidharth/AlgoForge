#include <iostream>
#include "../include/queue.h"

using namespace std;

void queueUsingArray() {
    int size;
    cout << "\n--- Queue Using Array ---\n";
    cout << "Enter queue size: ";
    cin >> size;
    int* queue = new int[size];
    int front = 0;
    int rear = -1;
    int count = 0;
    int choice;
    int value;
    do {
        cout << "\n===== Queue Menu =====\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Front\n";
        cout << "4. Display\n";
        cout << "0. Back\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                if (count == size) {
                    cout << "Queue Overflow!\n";
                }
                else {
                    cout << "Enter value: ";
                    cin >> value;
                    rear = (rear + 1) % size;
                    queue[rear] = value;
                    count++;
                    cout << "Value inserted successfully.\n";}
                break;
            case 2:
                if (count == 0) {
                    cout << "Queue Underflow!\n";}
                else {
                    cout << "Dequeued value: " << queue[front] << endl;
                    front = (front + 1) % size;
                    count--;}
               break;
            case 3:
                if (count == 0) {
                    cout << "Queue is empty.\n";}
                else {
                    cout << "Front element: " << queue[front] << endl;}
                break;
            case 4:
                if (count == 0) {
                    cout << "Queue is empty.\n"; }
                else {
                    cout << "Queue: ";
                    for (int i = 0; i < count; i++) {
                        cout << queue[(front + i) % size] << " ";
                    }
                    cout << endl;}
                break;
            case 0:
                break;
            default:
                cout << "Invalid choice!\n";}
    } while (choice != 0);
    delete[] queue;}