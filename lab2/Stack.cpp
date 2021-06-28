#include<iostream>
#include"Stack.h"

Stack::Stack(int size){
    maxStackSize=size;
    topIndex=-1;
    data=new int[size];
}

bool Stack::isFull(){
    return topIndex==maxStackSize-1;
}

bool Stack::isEmpty(){
    return topIndex<0;
}

void Stack::push(int element){
    if(isFull()){
        std::cout<<"Stack is Full.\n";
    }
    else{
        data[++topIndex]=element;
    }
}

int Stack::top(){
    if(isEmpty){
        std::cout<<"Stack is Empty.\n";
    }
    else{
        return data[topIndex];
    }
}

int Stack::pop(){
    if(!isEmpty){
        int temp;
        temp=data[maxStackSize];
        return temp;
    }
    else{
        std::cout<<"Empty";
    }
}