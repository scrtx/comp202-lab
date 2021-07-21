#include"Postfix.h"
#include<cmath>

bool tools::isOperator(string op){
    if(op=="+"||op=="-"||op=="*"||op=="/"||op=="^"){
        return true;
    }
    else{
        return false;
    }
}

int tools::operation(int op1, int op2 , string op){
    int solved;
    
    switch(op){
        case '+':
            solved=op2+op1;
            break;
        case '-':
            solved=op2-op1;
            break;
        case '*':
            solved=op2*op1;
            break;
        case '/':
            solved=op2/op1;
            break;
        case '^':
            solved=pow(op2,op1);
            break;
        default:
            solved=0;
            cout<<"error"<<endl;
    }

    return solved;
}

void evaluate(string postfix){
    
}