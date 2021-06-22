#pragma once
#include"LinkedList.h"

class Stack{
    public:
        virtual bool isEmpty()=0;
        virtual void push(int data)=0;
        virtual int pop()=0;
};

class LinkedListStack : public Stack{
    private:
        LinkedList stacklist;
    public:
        virtual bool isEmpty(){
            return stacklist.isEmpty();
        }
        
        virtual void push(int data){
            stacklist.addToHead(data);
        }

        virtual int pop(){
            return stacklist.removeFromHead();
        }
}; 
