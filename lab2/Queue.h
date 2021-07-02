#ifndef QUEUE_H
#define QUEUE_H

template <typename T>
class Queue{
    public: 
        virtual void enqueue(T element)=0;
        virtual bool isEmpty()=0;
        virtual bool isFull()=0;
        virtual void dequeue()=0;
        virtual void front()=0;
        virtual void back()=0;
};

template<typename T>
class ArrayQueue : public Queue<T>{
    private:
        int maxQueueSize;
        T *data;
        int f,r;
    public: 
        ArrayQueue(int size){
            f=0;
            r=-1;
            maxQueueSize=size; 
            data=new T[maxQueueSize];
        }

        virtual void enqueue(T element){
            if(isFull()){
                std::cout<<"Queue is Full."<<std::endl;
            }
            else{
                data[++r]=element;
            }
        }

        virtual bool isEmpty(){
            return r<0;
        }

        virtual bool isFull(){
            return r==maxQueueSize-1;
        }

        virtual void dequeue(){
            if(isEmpty()){
                std::cout<<"Queue is Empty."<<std::endl;
            }
            else{
                std::cout<<data[f]<<std::endl;
                f++;
            }
        }

        virtual void front(){
            if(!isEmpty()){
                std::cout<<"Front : "<<data[f]<<std::endl;
            }
            else{
                std::cout<<"Queue is Empty."<<std::endl;
            }
        }

        virtual void back(){
            if(!isEmpty()){
                std::cout<<"Back : "<<data[r]<<std::endl;
            }
            else{
                std::cout<<"Queue is Empty."<<std::endl;
            }
        }
};

#endif