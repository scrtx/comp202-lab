#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<iostream>
class Node{
    public:
        int info;
        Node *next;
        Node(): next(nullptr){}
        Node(int info,Node *next): info(info),next(next) {}  
};

class LinkedList{
    public:
        LinkedList();
        bool isEmpty();
        void addToHead(int data);
        void addToTail(int data);
        void add(int data, Node *predecessor);
        int removeFromHead();
        void remove(int data);
        bool retrieve(int data,Node *outputptr);
        bool search(int data);
        void traverse(char separator=' ');
        int getHead();
        int getTail();
    private:
        Node *HEAD;
        Node *TAIL;
};

#endif