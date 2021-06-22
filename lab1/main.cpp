#include <iostream>
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"

int main(){    
    LinkedList list;
    Node *t=nullptr;
        
        list.addToHead(5);
        list.addToTail(69);
        list.addToHead(8);
        list.addToHead(24);
        list.addToTail(3);
        list.traverse();

        list.removeFromHead();
        list.traverse();
        list.remove(69);
        list.traverse();

        t=list.retrieve(8,t);
        std::cout<<t->info<<std::endl;
        list.add(7,t);
        list.traverse();

        if(list.search(69)==true){
            std::cout<<"69 is in list."<<std::endl;
        }
        else{
            std::cout<<"69 isn't in list"<<std::endl;
        }

    return 0;
}