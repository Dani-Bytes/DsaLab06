#pragma once
#include<iostream>
class Node {
public:
    Node* next;
    int data;

    Node(int data) {
        next = NULL;
        this->data = data;
    }
};


