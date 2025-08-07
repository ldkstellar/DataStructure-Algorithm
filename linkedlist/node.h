#include <iostream>
template <typename T>
class Node
{
public:
    Node()= delete;
    Node(T value);
    Node(T value, Node* next);
    void print();
private:
    T data;
    Node* next;

    /* data */
};
template <typename T>
Node<T>::Node(T value):data(value),next(nullptr){}
template <typename T>
Node<T>:: Node(T value, Node* next):data(value),next(next){}
template <typename T>
void Node<T>::print(){
    Node<T>* current = this;
    while (current)
    {
        std::cout<<current->data<<std::endl;
        current =  current->next;
        
    }
 }