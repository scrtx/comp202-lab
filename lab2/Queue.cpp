#include<iostream>
#include"Queue.h"

Queue::Queue(int size){
    f=0;
    r=0;
    maxQueueSize=size;
    data=new int[maxQueueSize];
}

bool Queue::isEmpty(){}
bool Queue::isFull(){}