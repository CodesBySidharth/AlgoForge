#include <iostream>
#include "../include/linkedList.h"
using namespace std;
struct Node {
    int data;
    Node* next;
};
void insertAtBeginning() {
    Node* head = nullptr;
    int n;
    cout << "\n--- Singly Linked List ---\n";
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int value;
        cout << "Enter value: ";
        cin >> value;
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }
    cout << "\nLinked List: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;}
    cout << endl;
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    } }