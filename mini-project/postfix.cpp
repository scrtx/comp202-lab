#include"Postfix.h"
#include<cmath>

bool tools::isOperator(string op){
    if(op=="+"||op=="-"||op=="*"||op=="/"){
        return true;
    }
    else{
        return false;
    }
}

int tools::operation(int op1, int op2 , string op){
    if(op=="+"){
        return op2+op1;
    }
    else if(op=="-"){
        return op2-op1;
    }
    else if(op=="*"){
        return op2*op1;
    }
    else if(op=="/"){
        return op2/op1;
    }
}

void evaluate(string postfix){
    tools p;
    int len=postfix.size();
    char a;
    while(a!='\0'){

    }
}