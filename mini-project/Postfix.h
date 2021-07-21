#ifndef POSTFIX_H
#define POSTFIX_H

#include<iostream>
#include<string>
#include"LinkedStack.h"

using namespace std;

class tools{
    public:
        bool isOperator(string op);
        int operation(int op1,int op2,string op);

};

void evaluate(string postfix);

#endif