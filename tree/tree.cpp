#include"node.h"
#include <iostream>

void findNum(Node<int>* node,int num);


int main(int argc, char const *argv[])
{
    Node<int>head(44);//내가 대가리다
    Node<int>arm(67);//나도 대가리다
    Node<int>leg(39);//나도 대가니다
    head.setNode(&arm,&leg);//응 아니야 알아서 정렬해줌

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