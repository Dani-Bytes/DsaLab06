#pragma once
#include "Node.h"
using namespace std;
class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    void insertAtHead(int data) {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
        cout << "Inserted " << data << " at head." << endl;
    }

    void deleteAtHead() {
        if (head == NULL) {
            cout << "The list is empty." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Deleted head node." << endl;
    }

    void insertAtTail(int data) {
        Node* endNode = new Node(data);
        if (head == NULL) {
            head = endNode;
            cout << "Inserted " << data << " at tail (as the first node)." << endl;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = endNode;
        cout << "Inserted " << data << " at tail." << endl;
    }

    void deleteFromTail() {
        if (head == NULL) {
            cout << "The list is empty." << endl;
            return;
        }
        if (head->next == NULL) {
            delete head;
            head = NULL;
            cout << "Deleted the only node in the list." << endl;
            return;
        }
        Node* previous = NULL;
        Node* current = head;
        while (current->next != NULL) {
            previous = current;
            current = current->next;
        }
        previous->next = NULL;
        delete current;
        cout << "Deleted from tail." << endl;
    }

    void insertAtMid(int data) {
        Node* newNode = new Node(data);
        if (head == NULL || head->data > data) {
            newNode->next = head;
            head = newNode;
            cout << "Inserted " << data << " based on priority." << endl;
            return;
        }
        Node* current = head;
        while (current->next != NULL && current->next->data <= data) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
        cout << "Inserted " << data << " based on priority." << endl;
    }

    void deleteHighestPriority() {
        if (head == NULL) {
            cout << "The list is empty." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Deleted the highest priority node." << endl;
    }

    void displayLinkedList() {
        Node* temp = head;
        if (temp == NULL) {
            cout << "The list is empty." << endl;
            return;
        }
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    bool isInteger(const string& str) {
        for (char c : str) {
            if (!isdigit(c)) return false;
        }
        return true;
    }
};
