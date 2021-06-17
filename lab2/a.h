class Stack{
    public:
        virtual int push(int element)=0;
        virtual void pop()=0;
        virtual bool isEmpty()=0;
        virtual bool isFull()=0;
        virtual int top()=0;
};

class Queue{
    public:
        void enqueue(int element);
        bool isEmpty();
        bool isFull();
        void dequeue();
};