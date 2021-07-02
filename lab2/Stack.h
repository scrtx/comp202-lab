#ifndef STACK_H
#define STACK_H

template <typename T>
class Stack{
    public:
        virtual void push(T element)=0;
        virtual void pop()=0;
        virtual bool isEmpty()=0;
        virtual bool isFull()=0;
        virtual void top()=0;
};

template<typename T>
class ArrayStack : public Stack<T>{
   
    private:
        T *data;
        int topIndex;
        int maxStackSize;
   
    public:
        ArrayStack(int size){
            maxStackSize=size;
            topIndex=-1;
            data=new T[size];
        }
        
        virtual void push(T element){
            if(isFull()){
                std::cout<<"Stack Overflow."<<std::endl;
            }
            else{
                data[++topIndex]=element;
            }
        
        }
        
        virtual void pop(){
            if(!isEmpty()){
                std::cout<<data[topIndex]<<std::endl;
                topIndex--;
            }
            else{
                std::cout<<"Stack Underflow."<<std::endl;
            }
        }
        
        virtual bool isEmpty(){
            return topIndex<0;
        }
        
        virtual bool isFull(){
            return topIndex==maxStackSize-1;
        }
        
        virtual void top(){
            if(isEmpty()){
                std::cout<<"Stack Underflow."<<std::endl;
            }
            else{
                std::cout<<"The top element is : "<<data[topIndex]<<std::endl;
            }
        }
};

#endif