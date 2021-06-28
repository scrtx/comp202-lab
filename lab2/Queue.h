#ifndef STACKQUEUE_H
#define STACKQUEUE_H

class Queue{
    public:
        void enqueue(int element);
        bool isEmpty();
        bool isFull();
        void dequeue();
        int front();
        int back();
};

#endif