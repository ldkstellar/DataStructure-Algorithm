#include <iostream>
class Node {
 public:
  Node* next;  // 다음 노드
  int data;
  void create(int[], int);
  void display();
};

Node* first;

void Node::create(int A[], int n) {  // 전역변수 first의 포인터가 숨어있다.
  Node *t, *last;
  first = new Node;
  first->data = A[0];
  first->next = NULL;
  last = first;
  for (size_t i = 1; i < n; i++) {
    t = new Node;
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
}

void Node::display() {  // 밑에도 이하동문
  while (first != NULL) {
    printf("%d ", first->data);
    first = first->next;
  }
}

int main(int argc, char const* argv[]) {
  int A[] = {3, 5, 7, 10, 15};
  Node linkedList;          // 공간만 잡아 놓음
  linkedList.create(A, 5);  // 여가서 전역변수의 first를 사용하여 만든다,
  linkedList.display();
  return 0;
}
