#include "node.h"

int main(int argc, char const *argv[])
{
    Node<int> node5(5);
    Node<int> node4(4,&node5);
    Node<int> node3(3,&node4);
    Node<int> node2(2,&node3);
    Node<int> node1(1,&node2);
    node1.print();



    
    return 0;
}
