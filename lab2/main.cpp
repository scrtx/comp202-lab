#include<iostream>
#include"Stack.h"
#include"Queue.h"

int main(){
    ArrayStack<double> s(10);
        s.push(1.2);
        s.push(14.55);
        s.push(81.25);
        s.top();
        s.push(3.002);
        s.push(1.5);
        s.pop();
        s.push(24.69);
        s.pop();
        s.pop();
    
    std::cout<<"\n";

    ArrayQueue<char> q(10);
        q.enqueue('s');
        q.enqueue('p');
        q.enqueue('d');
        q.enqueue('o');
        q.enqueue('e');
        q.front();
        q.back();
        q.dequeue();
        q.dequeue();
        q.front();
        q.back();
}