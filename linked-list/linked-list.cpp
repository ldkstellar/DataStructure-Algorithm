#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
};

int main() {

  int A[] = {3, 5, 7, 10, 15};

  Node *head = new Node; // 새 노드생성

  Node *temp;
  Node *last;

  head->data = A[0];
  head->next = nullptr;
  last = head;

  // Create a Linked List
  for (int i = 1; i < sizeof(A) / sizeof(A[0]); i++) {

    temp = new Node;

    temp->data = A[i];
    temp->next = nullptr;

    last->next = temp; // head로 숨기고 있어
    last = temp;       // 다시 니가 head야
  }

  // Display Linked List
  Node *p = head;

  while (p != nullptr) {
    cout << p->data << " -> " << flush;
    p = p->next;
  }

  return 0;
}