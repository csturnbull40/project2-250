//
//  StackLinkedList.h
//  CSDP PP2
//
//  Created by Chris Turnbull on 4/10/24.
//
#ifndef STACK_LINKED_LIST_H
#define STACK_LINKED_LIST_H

class StackNode {
public:
    int data;
    StackNode* next;
};

class StackLinkedList {
private:
    StackNode* top;
public:
    StackLinkedList();
    void push(int data);
    void display();
};

#endif
