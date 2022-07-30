#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node() {
    data = 0;
    next = nullptr;
  }

  Node(int d) {
    data = d;
    next = nullptr;
  }
};

void insertNodeAtLast(Node **head, int data) {
  if (*head == nullptr) {
    *head = new Node(data);
    return;
  }
  Node *cr = *head;
  while (cr->next) {
    cr = cr->next;
  }
  cr->next = new Node(data);

  return;
}

void displayList(Node *head) {
  cout << "HEAD->|";
  while (head) {
    cout << head->data << "|->|";
    head = head->next;
  }
  cout << "NULL\n";
}

void swapKthnodefromLastwithKthNodefromBeginning(Node *head, int k) {
  if (head == nullptr)
    return;
  Node *kthNodeFromBegin;
  Node *kthNodeFromEnd = head;
  Node *crawl = head;
  int i = 1;
  bool flag = false;
  while (crawl->next) {
    if (i == k) {
      kthNodeFromBegin = crawl;
      flag = true;
    }
    if (flag) {
      kthNodeFromEnd = kthNodeFromEnd->next;
    }

    i++;
    crawl = crawl->next;
  }

  int tmp = kthNodeFromBegin->data;

  kthNodeFromBegin->data = kthNodeFromEnd->data;
  kthNodeFromEnd->data = tmp;

  return;
}

int main(int argc, char **argv) {
  Node *head = nullptr; // new Node(0); //= nullptr;
  //*head = nullptr;
  for (int i = 1; i <= 10; i++) {
    insertNodeAtLast(&head, i);
  }

  displayList(head);

  cout << "\n\n\n";
  swapKthnodefromLastwithKthNodefromBeginning(head, 4);
  displayList(head);

  return 0;
}
