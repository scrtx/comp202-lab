#include<iostream>
#include"LinkedList.h"
#include"stack.h"
#include"queue.h"

int main(){
    LinkedListStack slist;
    LinkedListQueue qlist;
    
        slist.push(10);
        slist.push(5);
        std::cout<<slist.pop()<<","<<slist.pop()<<std::endl;
    
        qlist.enqueue(1);
        qlist.enqueue(22);
        qlist.enqueue(3);
        qlist.enqueue(24);
        std::cout<<"Front : "<<qlist.front()<<std::endl;
        std::cout<<"Rear : "<<qlist.rear()<<std::endl;
        std::cout<<qlist.dequeue()<<","<<qlist.dequeue()<<std::endl;
        
    return 0;
}