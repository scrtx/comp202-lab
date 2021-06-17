#include <iostream>
#include "LinkedList.h"

int main(){
    linkedList list;
    list.addToHead(5);
    list.addToHead(8);
    list.addToTail(69);
    list.traverse(' ');
    list.addToHead(10);
    list.addToTail(12);
    list.traverse(' ');
    return 0;
}