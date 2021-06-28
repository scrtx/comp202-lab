#ifndef STACKQUEUE_H
#define STACKQUEUE_H

class Stack{
    private:
        int *data;
        int topIndex=-1;
        int maxStackSize;
    public:
        Stack(int maxStackSize);
        virtual int push(int element)=0;
        virtual void pop()=0;
        virtual bool isEmpty()=0;
        virtual bool isFull()=0;
        virtual int top()=0;
};

#endif