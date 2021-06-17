#ifndef STACK_H
#define STACK_H

#include"LinkedList.h"
class Stack{
    public: 
        virtual bool isEmpty()=0;
        virtual void push(int data)=0;
        virtual int pop()=0;
};

class LinkedListStack : public Stack{
    public:

}; 

#endif