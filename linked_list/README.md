# Linked List

A linked list is a linear data structure where each element is a separate object. Each element (we will call it a node) of a list is comprised of two items - the data and a reference to the next node. The last node has a reference to `null`. The entry point into a linked list is called the head of the list. It should be noted that the head is not a separate node, but the reference to the first node. If the list is empty then the head is a `null` reference.

A linked list is a dynamic data structure. The number of nodes in a list is not fixed and can grow and shrink on demand. Any application which has to deal with an unknown number of objects will need to use a linked list.

## Advantages of Linked Lists

1. They are dynamic in nature which allocates the memory when required.
2. Insertion and deletion operations are easier and more efficient compared to arrays.
3. They can grow or shrink in size as needed.
4. They do not require contiguous memory allocation.

## Disadvantages of Linked Lists

1. They use more memory due to the storage of pointers.
2. Nodes are stored non-contiguously, which can lead to poor cache performance.
3. Access time is linear and slower compared to arrays.

## Basic Operations

Here are some basic operations that can be performed on a linked list:

1. **Insertion**: Add a node at the beginning, end, or any given position in the list.
2. **Deletion**: Remove a node from the beginning, end, or any given position in the list.
3. **Traversal**: Access each node of the list to perform some operation (e.g., print data).
4. **Search**: Find a node in the list containing a specific value.

## Example in C++

Here is a simple example of a singly linked list in C++:

```cpp
#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node* next;
};

void printList(Node* n) {
  while (n != nullptr) {
    cout << n->data << " ";
    n = n->next;
  }
}

int main() {
  Node* head = nullptr;
  Node* second = nullptr;
  Node* third = nullptr;

  // allocate 3 nodes in the heap
  head = new Node();
  second = new Node();
  third = new Node();

  head->data = 1; // assign data in first node
  head->next = second; // link first node with second

  second->data = 2; // assign data to second node
  second->next = third;

  third->data = 3; // assign data to third node
  third->next = nullptr;

  printList(head);

  return 0;
}
```

## Insertion in a Linked List

Insertion in a linked list can be done at the `beginning`, `end`, or `any given position`. Here are the steps to insert a new node in a linked list:

### Insertion at the Beginning

To insert a new node at the beginning of the list, we need to:

1. Create a new node.
2. Assign data to the new node.
3. Link the new node to the head of the list.

```cpp
void insertAtBeginning(Node** head_ref, int new_data) {
  Node* new_node = new Node();
  new_node->data = new_data;
  new_node->next = *head_ref;
  *head_ref = new_node;
}
```

### Insertion at the End

To insert a new node at the end of the list, we need to:

1. Create a new node.
2. Assign data to the new node.
3. Traverse the list to reach the last node.
4. Link the new node to the last node

```cpp
void insertAtEnd(Node** head_ref, int new_data) {
  Node* new_node = new Node();
  Node* last = *head_ref;
  new_node->data = new_data;
  new_node->next = nullptr;
  if (*head_ref == nullptr) {
    *head_ref = new_node;
    return;
  }
  while (last->next != nullptr) {
    last = last->next;
  }
  last->next = new_node;
}
```

### Insert at a Given Position

To insert a new node at a given position in the list, we need to:

1. Create a new node.
2. Assign data to the new node.
3. Traverse the list to reach the node at the given position.
4. Link the new node to the next node.

```cpp
void insertAtPosition(Node* head, int new_data, int position) {
  Node* new_node = new Node();
  new_node->data = new_data;
  Node* temp = head;
  for (int i = 0; i < position - 1; i++) {
    temp = temp->next;
  }
  new_node->next = temp->next;
  temp->next = new_node;
}
```

#### Complexity Analysis

The time complexity of inserting a node at the beginning or end of the list is O(1). However, inserting a node at a given position requires traversing the list, which has a time complexity of O(n).

## Deletion in a Linked List

Deletion in a linked list can be done at the `beginning`, `end`, or `any given position`. Here are the steps to delete a node from a linked list:

### Deletion at the Beginning

To delete a node from the beginning of the list, we need to:

1. Store the reference to the head node in a temporary pointer.
2. Move the head pointer to the next node.
3. Delete the temporary pointer.

```cpp
void deleteAtBeginning(Node** head_ref) {
  Node* temp = *head_ref;
  *head_ref = temp->next;
  delete temp;
}
```

### Deletion at the End

To delete a node from the end of the list, we need to:

1. Traverse the list to reach the second last node.
2. Store the reference to the last node in a temporary pointer.
3. Set the next pointer of the second last node to `null`.
4. Delete the temporary pointer.

```cpp
void deleteAtEnd(Node** head_ref) {
  Node* temp = *head_ref;
  Node* prev = nullptr;
  while (temp->next != nullptr) {
    prev = temp;
    temp = temp->next;
  }
  prev->next = nullptr;
  delete temp;
}
```

### Deletion at a Given Position

To delete a node from a given position in the list, we need to:

1. Traverse the list to reach the node at the given position.
2. Store the reference to the previous node in a temporary pointer.
3. Link the previous node to the next node of the node to be deleted.
4. Delete the temporary pointer.

```cpp
void deleteAtPosition(Node** head_ref, int position) {
  Node* temp = *head_ref;
  if (position == 0) {
    *head_ref = temp->next;
    delete temp;
    return;
  }
  for (int i = 0; temp != nullptr && i < position - 1; i++) {
    temp = temp->next;
  }
  if (temp == nullptr || temp->next == nullptr) {
    return;
  }
  Node* next = temp->next->next;
  delete temp->next;
  temp->next = next;
}
```

#### Complexity Analysis

The time complexity of deleting a node from the beginning or end of the list is O(1). However, deleting a node from a given position requires traversing the list, which has a time complexity of O(n).

## Traversal of a Linked List

Traversal of a linked list means visiting each node of the list and performing some operation on it. Here is a simple function to traverse a linked list and print the data of each node:

```cpp
void printList(Node* n) {
  while (n != nullptr) {
    cout << n->data << " ";
    n = n->next;
  }
}
```

#### Complexity Analysis

The time complexity of traversing a linked list is O(n), where n is the number of nodes in the list.

## Search in a Linked List

Searching in a linked list means finding a node with a specific value. Here is a simple function to search for a node with a given value in a linked list:

```cpp
Node* search(Node* head, int key) {
  Node* current = head;
  while (current != nullptr) {
    if (current->data == key) {
      return current;
    }
    current = current->next;
  }
  return nullptr;
}
```

#### Complexity Analysis

The time complexity of searching in a linked list is O(n), where n is the number of nodes in the list.

## Circular Linked List

A circular linked list is a linked list where all nodes are connected in a continuous circle. The last node of the list points back to the first node. Circular linked lists can be singly or doubly linked.

Here is an example of a circular linked list:

```
1 -> 2 -> 3 -> 4 -> 1
```

## Doubly Linked List

A doubly linked list is a linked list where each node contains two pointers - one pointing to the next node and the other pointing to the previous node. This allows for traversal in both directions.

Here is an example of a doubly linked list:

```
null <- 1 <-> 2 <-> 3 <-> 4 -> null
```

## Multilevel Linked List

A multilevel linked list is a linked list where each node can have a child linked list. This allows for a hierarchical structure in the linked list.

Here is an example of a multilevel linked list:

```
1 -> 2 -> 3 -> 4
      |
      5 -> 6
      |
      7 -> 8 -> 9
```

## Practice Problems

1. [Reverse a Linked List](https://leetcode.com/problems/reverse-linked-list/)
2. [Detect a Cycle in a Linked List](https://leetcode.com/problems/linked-list-cycle/)
3. [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)
4. [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)
5. [Intersection of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/)
6. [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)
7. [Flatten a Multilevel Doubly Linked List](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/)
8. [Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/)
9. [Add Two Numbers Represented by Linked Lists](https://leetcode.com/problems/add-two-numbers/)
10. [Rotate List](https://leetcode.com/problems/rotate-list/)
11. [Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)
12. [Partition List](https://leetcode.com/problems/partition-list/)
13. [Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/)
14. [Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/)
15. [Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/)
16. [Swap Nodes in Pairs](https://leetcode.com/problems/swap-nodes-in-pairs/)
17. [Reverse Linked List II](https://leetcode.com/problems/reverse-linked-list-ii/)
18. [Remove Duplicates from Sorted List II](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/)
19. [Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/)
20. [Remove Zero Sum Consecutive Nodes from Linked List](https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list/)

