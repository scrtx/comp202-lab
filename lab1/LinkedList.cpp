#include<iostream>
#include"Linkedlist.h"

bool linkedList::isEmpty(){
    return HEAD==nullptr && TAIL==nullptr;
}

void linkedList::addToHead(int data){
    Node *newNode = new Node(data,HEAD);
    //newNode->info=data;
    //newNode->next=HEAD;
    HEAD=newNode;
    if(TAIL==nullptr){
        TAIL=HEAD;
    }
}

void linkedList::addToTail(int data){
    Node *newNode=new Node(data,nullptr);
    //newNode->info=data;
    //newNode->next=nullptr;
    TAIL->next=newNode;
    TAIL=TAIL->next;
}

void linkedList::add(int data, Node *predecessor){
    Node *newNode=new Node(data,predecessor->next);
    //newNode->info=data;
    //newNode->next=predecessor->next;
    predecessor->next=newNode;
}

void linkedList::removeFromHead(){
    if(!this->isEmpty()){
        Node *nodeToDelete=HEAD;
        this->HEAD = nodeToDelete;
        
        if(HEAD==nullptr){
            TAIL=nullptr;
        }

        delete nodeToDelete;
    } 
}

void linkedList::remove(int data){
    Node *temp=nullptr;
    Node*prev=nullptr;
    
    if (!this->isEmpty()){
        if(HEAD->info==data){
            removeFromHead();
        }
    }
    else{
        temp=HEAD->next;
        prev=HEAD;
        
        while(temp!=nullptr){
            if(temp->info==data){
                break;
            }
            else{
                prev=prev->next;
                temp=temp->next;
            }
        }
        
        if (temp!=nullptr){
            prev->next=temp->next;
            delete temp;
            
            if(prev->next==nullptr){
                TAIL=prev;
            }
        }
    }
}

bool linkedList::retrieve(int data,Node *outputptr){
    Node *p=HEAD;
    while (p!=nullptr && p->info!=data){
        p=p->next;
    }

    if(p==nullptr){
        return false;
    }
    else{
        outputptr=p;
        return true;
    } 
}

/*bool linkedList::search(int data){
    Node*p=HEAD;
    if(p!=nullptr && data==p->info){
        
    }
    else{

    }
}*/
//search number
/*
    Node* searchnumber = nullptr;
    temp = head;
    current = head;

    while (current != NULL && current->number != searchNum)
    {
        temp = current;
        current = current->next;
    }
    if (current != NULL)
    {
        searchnumber = current;
        current = current->next;
        std::cout << "-" << searchnumber << " Found";
    }
    else
    {
        std::cout << "N/A";
    }
}
*/

void linkedList::traverse(char separator){
    if(isEmpty()){
        std::cout<<"List is empty."<<std::endl;
    }
    else{
        Node *temp=HEAD;
        while(temp!=nullptr){
            std::cout<<temp->info<<separator;
            temp=temp->next;
        }
        std::cout<<std::endl;
    }
}