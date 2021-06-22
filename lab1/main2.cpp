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
    
        qlist.enqueue(33);
        qlist.enqueue(22);
        qlist.enqueue(42);
        qlist.enqueue(24);
        qlist.traverse();
        std::cout<<"Front : "<<qlist.front()<<std::endl;
        std::cout<<"Rear : "<<qlist.rear()<<std::endl;
        std::cout<<qlist.dequeue()<<","<<qlist.dequeue()<<std::endl;
        
    return 0;
}