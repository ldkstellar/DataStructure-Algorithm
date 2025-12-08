#include <iostream>
class Node {
 public:
  Node* next;  // 다음 노드
  int data;
};

Node* first;  // 전역시작 노드
int sample = 1;
// 링크드 리스트 생성
void create(int A[],
            int n) {  // 전역변수 first의 포인터가 숨어있다. 함수 파라미터에
  Node *t, *last;
  first = new Node;
  first->data = A[0];
  first->next = nullptr;
  last = first;
  for (size_t i = 1; i < n; i++) {
    t = new Node;
    t->data = A[i];
    t->next = nullptr;
    last->next = t;
    last = t;
  }
}

void display() {  // 밑에도 이하 동문
  // 함수 내부 조사식에 영향을 미친다.//read값은 포인터나 값복사 사용 원본을
  // 사용하면 원본 손상 이어날 가능성이 있다.
  Node* p = first;
  while (p != nullptr) {
    printf("%d ", p->data);
    p = p->next;
  }
}

void RDisplay(Node* p) {
  if (p != nullptr) {
    std::cout << p->data;
    RDisplay(p->next);
  }
}

void showSample() {
  sample -= 2;
  printf("%d", sample);
}
int main(int argc, char const* argv[]) {
  int A[] = {3, 5, 7, 10, 15};
  ;  // 공간만 잡아 놓음
  create(A, 5);

  // 여가서 전역변수의 first를 사용하여 만든다,
  display();
  RDisplay(first);
  return 0;
}
