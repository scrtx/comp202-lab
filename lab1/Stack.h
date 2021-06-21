#pragma once
#include"LinkedList.h"

class Stack{
    public:
        Stack();
        ~Stack();
        virtual bool isEmpty()=0;
        virtual void push(int data)=0;
        virtual int pop()=0;
};

class LinkedListStack : public Stack{
    private:
        LinkedList stacklist;
    public:
        virtual bool isEmpty(){
            return false;
        }
        
        virtual void push(int data){
            stacklist.addToHead(data);
        }

        virtual int pop(){
            stacklist.removeFromHead();
        }
}; 
