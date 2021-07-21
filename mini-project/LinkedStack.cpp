#include"LinkedStack.h"
#include<iostream>

LinkedStack::LinkedStack(){
    lastNode=nullptr;
}

bool LinkedStack::isEmpty(){
    return lastNode==nullptr;
}

void LinkedStack::push(int data){
    Node*newNode=new Node(data,nullptr);
    
    if(isEmpty()){
        lastNode=newNode;
    }
    else{
        newNode->next=lastNode->next;
    }
    lastNode->next=newNode;
}

int LinkedStack::pop(){
    Node*top=lastNode->next;
    int data=top->operand;

    if(top==lastNode){
        lastNode=nullptr;
    }
    else{
        lastNode->next=top->next;
    }

    delete top;
    return data;
}