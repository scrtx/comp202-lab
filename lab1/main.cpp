#include <iostream>
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"

int main(){    
    LinkedList list;
        list.traverse(',');
        list.addToHead(5);
        list.addToHead(8);
        list.addToHead(3);
        list.addToTail(69);
        list.traverse();
        list.removeFromHead();
        list.traverse();


    return 0;
}