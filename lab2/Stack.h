#ifndef STACk_H
#define STACK_H

class Stack{
    private:
        int *data;
        int topIndex;
        int maxStackSize;
    public:
        Stack(int size);
        virtual void push(int element)=0;
        virtual int pop()=0;
        virtual bool isEmpty()=0;
        virtual bool isFull()=0;
        virtual int top()=0;
};

#endif