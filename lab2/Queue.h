#ifndef QUEUE_H
#define QUEUE_H

class Queue{
    private:
        int maxQueueSize;
        int *data;
        int f,r;
    public:
        Queue(int size);
        void enqueue(int element);
        bool isEmpty();
        bool isFull();
        void dequeue();
        int front();
        int back();
};

#endif