#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};

void insertAtHead(Node *&head, int data) {
  Node *newNode = new Node(data);
  newNode->next = head;
  head = newNode;
}

void printList(Node *&head) {
  Node *temp = head;

  while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

Node *reverseLinkedList(Node *&head) {
  if (!head || !head->next)
    return head;

  Node *prev = nullptr;
  Node *curr = head;
  Node *forw = nullptr;

  while (!curr) {
    forw = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forw;
  }

  return prev;
}

int main(int argc, char *argv[]) {
  Node *head = nullptr;

  insertAtHead(head, 3);
  insertAtHead(head, 2);
  insertAtHead(head, 1);

  printList(head);
  return 0;
}
