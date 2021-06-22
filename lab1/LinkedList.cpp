#include<iostream>
#include"LinkedList.h"

LinkedList::LinkedList(){
    HEAD=nullptr;
    TAIL=nullptr;
}

bool LinkedList::isEmpty(){
    return HEAD==nullptr && TAIL==nullptr;
}

void LinkedList::addToHead(int data){
    Node *newNode = new Node(data,HEAD);

    HEAD=newNode;
    if(TAIL==nullptr){
        TAIL=HEAD;
    }
}

void LinkedList::addToTail(int data){
    Node *newNode=new Node(data,nullptr);
    
    if(isEmpty()){
        HEAD = newNode;
        TAIL = newNode;
    }

    TAIL->next=newNode;
    TAIL=TAIL->next;
}

void LinkedList::add(int data, Node *predecessor){
    Node *newNode=new Node(data,predecessor->next);
    predecessor->next=newNode;
}

int LinkedList::removeFromHead(){
    if(!isEmpty()){
        Node *nodeToDelete=HEAD;
        int element=nodeToDelete->info;
        HEAD = nodeToDelete->next;
        
        if(HEAD==nullptr){
            TAIL=nullptr;
        }

        delete nodeToDelete;
        return element;
    }
    else{
        return 0;
    }
}

void LinkedList::remove(int data){
    if (!this->isEmpty()){
        if (HEAD->info == data){
            removeFromHead();
        }
        else{
            Node *temp = new Node();
            temp = HEAD->next;
            Node *prev = new Node();
            prev = HEAD;

            while (temp != nullptr){
                if (temp->info == data){
                    break;
                }
                else{
                    prev = prev->next;
                    temp = temp->next;
                }
            }

            if (temp != nullptr){
                prev->next = temp->next;
                delete temp;

                if (prev->next == nullptr){
                    TAIL = prev;
                }
            }

            if (temp == nullptr){
                std::cout << "Not found" << std::endl;
            }
        }
    }
}

Node* LinkedList::retrieve(int data,Node *outputptr){
    Node *p=HEAD;
    while (p!=nullptr){
       if(p->info==data){
            outputptr=p;
            return outputptr;
        }
        p=p->next;
    }
    return nullptr;
}

bool LinkedList::search(int data){
    Node*p=HEAD;
    while(p!=nullptr){
        if(p->info==data){
            return true;
        }
        p=p->next;
    }
    return false;
}

void LinkedList::traverse(char separator){
    if(!isEmpty()){
        Node *temp=HEAD;
        while(temp!=nullptr){
            std::cout<<temp->info<<separator;
            temp=temp->next;
        }
        std::cout<<std::endl;
    }
    else{
        std::cout<<"List is empty.\n";
    }
}

int LinkedList::getHead(){
    return HEAD->info;
}

int LinkedList::getTail(){
    return TAIL->info;
}