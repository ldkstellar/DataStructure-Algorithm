#include"node.h"
#include <iostream>

void findNum(Node<int>* node,int num);


int main(int argc, char const *argv[])
{
    Node<int>head(44);
    Node<int>arm(67);
    Node<int>leg(39);
    head.setNode(&arm,&leg);

    findNum(&head ,67);


    return 0;
}

void findNum(Node<int>* node,int num){
    int value = node->getValue();
    if (value ==  num)
    {
        std::cout<<"value is "<< value;
        
    }
    else if (node->getRightNodePtr()==nullptr && node->getLeftNodePtr() ==nullptr){

        std::cout<<"no value";
    }
    else if (num>value){
        findNum(node->getRightNodePtr(),num);

    }
     else if (num<value){
        findNum(node->getLeftNodePtr(),num);

    }
    
}