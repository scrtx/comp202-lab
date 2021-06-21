#include<iostream>
#include"LinkedList.h"
#include"stack.h"
#include"queue.h"

int main(){
    LinkedListStack slist;
        slist.push(10);
        slist.push(5);
        //std::cout<<slist.pop()<<","<<slist.pop()<<std::endl;
    
    LinkedListQueue qlist;
        qlist.enqueue(1);
        qlist.enqueue(2);
        qlist.enqueue(3);
        std::cout<<qlist.dequeue()<<","<<qlist.dequeue()<<std::endl;

    return 0;
}