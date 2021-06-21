#include <iostream>
#include "LinkedList.h"

int main(){
    LinkedList list;
    list.addToHead(5);
    list.addToHead(8);
    list.traverse();
    list.addToTail(69);
    list.traverse();
    list.removeFromHead();
    list.traverse();
    return 0;
}