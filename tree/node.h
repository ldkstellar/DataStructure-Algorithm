#include <iostream>
template <typename T>
class Node
{
public:
    Node()= delete;
    Node(T value);
    Node<T>:: Node(T value, Node* right,Node*left);
    void setNode(Node* right,Node*left);
    T getValue();
    Node<T>*getLeftNodePtr();
    Node<T>*getRightNodePtr();

private:
    T data;
    Node* right;
    Node* left; 
};
template <typename T>
Node<T>::Node(T value):data(value),right(nullptr),left(nullptr){}
template <typename T>
Node<T>:: Node(T value, Node* right,Node*left):data(value),right(right->data > left->data?right:left),left(left->data<right->data?left:right){}

template <typename T>
void Node<T>::setNode(Node* right,Node*left){
    this->right = right;
    this->left =left;

}

template <typename T>
T Node<T>::getValue(){
    return data;
}

template <typename T>
 Node<T>* Node<T>::getRightNodePtr(){
    return right;
    
 }
 template <typename T>
 Node<T>* Node<T>::getLeftNodePtr(){
    return left;
    
 }