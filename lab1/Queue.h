#pragma once
#include "LinkedList.h"

class Queue{
    public:
        virtual void enqueue(int data)=0;
        virtual int dequeue()=0;
        virtual int front()=0;
        virtual int rear()=0;
};

class LinkedListQueue : public Queue{
    private:
        LinkedList queuelist;
        
    public:
        void enqueue(int data){
            queuelist.addToTail(data);
        }
        
        int dequeue(){
            return queuelist.removeFromHead();
        }
        
        int front(){
            return queuelist.getHead();
        }
        
        int rear(){
            return queuelist.getTail();
        }
        
        void traverse(){
            queuelist.traverse();
        }
};