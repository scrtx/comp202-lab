#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H

class Stack{
    public:
        virtual bool isEmpty()=0;
        virtual void push(int data)=0;
        virtual int pop()=0;
        virtual void traverse()=0;
};

struct Node{
    int operand;
    Node*next;
    
    Node(int operand, Node*next):
        operand(operand),next(next)
        {}
};

class LinkedStack : public Stack{
    public:
        LinkedStack();
        bool isEmpty();
        void push(int data);
        int pop();
    
    private:
        Node*lastNode;
};

#endif