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
    void insertAtEnd() {
    Node* head = nullptr;
    int n;
    cout << "\n--- Insert At End ---\n";
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int value;
        cout << "Enter value: ";
        cin >> value;
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;}
        else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;   }
            temp->next = newNode;   } }
    cout << "Linked List: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;}
    cout << endl;
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp; }
}
void insertAtPosition() {
    Node* head = nullptr;
    int n;
    cout << "\n--- Insert At Position ---\n";
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;  }
        else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next; }
            temp->next = newNode; } }
    int position;
    int value;
    cout << "Enter position: ";
    cin >> position;
    cout << "Enter value: ";
    cin >> value;
    Node* newNode = new Node();
    newNode->data = value;
    if (position == 1) {
        newNode->next = head;
        head = newNode; }
    else {
        Node* temp = head;
        for (int i = 1; i < position - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;}
    cout << "Linked List: ";
  Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next; }
    cout << endl;
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}
void deleteNode() {
    Node* head = nullptr;
    int n;
    cout << "\n--- Delete Node ---\n";
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
        }
        else {
            Node* temp = head;
            while (temp->next != nullptr)
                temp = temp->next;
            temp->next = newNode;
        } }
    int value;
    cout << "Enter value to delete: ";
    cin >> value;
    if (head != nullptr && head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;  }
    else {
        Node* temp = head;
        while (temp != nullptr &&
               temp->next != nullptr &&
               temp->next->data != value) {
            temp = temp->next;}
        if (temp == nullptr || temp->next == nullptr) {
            cout << "Value not found.\n";
        }
        else {
            Node* nodeToDelete = temp->next;
            temp->next = nodeToDelete->next;
            delete nodeToDelete;
            cout << "Node deleted successfully.\n";}}
    cout << "Linked List: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;}
    cout << endl;
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;}}