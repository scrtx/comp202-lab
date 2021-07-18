#ifndef stack_h
#define stack_h
#include<string>

class stack{
    public:
        virtual bool isEmpty()=0;
        virtual bool isFull()=0;
        virtual void push()=0;
        virtual void pop()=0;
};

class arrayStack : public stack{
    public:
        arrayStack():top(-1) {}
        
        bool isEmpty(){
            return top<0;
        }

        bool isFull();
        void push();
        void pop();
    private:
        int top;
        int maxStackSize;
};



#endif