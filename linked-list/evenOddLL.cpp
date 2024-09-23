#include <iostream>

struct Node {
    int data;
    Node* next;
};

void segregateEvenOdd(Node** head) {
    if (*head == nullptr || (*head)->next == nullptr) {
        return;
    }

    Node* evenHead = nullptr;
    Node* evenTail = nullptr;
    Node* oddHead = nullptr;
    Node* oddTail = nullptr;

    Node* curr = *head;

    while (curr != nullptr) {
        if (curr->data % 2 == 0) {
            if (evenHead == nullptr) {
                evenHead = evenTail = curr;
            } else {
                evenTail->next = curr;
                evenTail = evenTail->next;
            }
        } else {
            if (oddHead == nullptr) {
                oddHead = oddTail = curr;
            } else {
                oddTail->next = curr;
                oddTail = oddTail->next;
            }
        }

        curr = curr->next;
    }

    if (evenHead == nullptr || oddHead == nullptr) {
        return;
    }

    evenTail->next = oddHead;
    oddTail->next = nullptr;

    *head = evenHead;
}

void printList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        std::cout << curr->data << " ";
        curr = curr->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create a sample linked list
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    head->next->next->next = new Node{4, nullptr};
    head->next->next->next->next = new Node{5, nullptr};

    std::cout << "Original Linked List: ";
    printList(head);

    segregateEvenOdd(&head);

    std::cout << "Segregated Linked List: ";
    printList(head);

    // Clean up memory
    Node* curr = head;
    while (curr != nullptr) {
        Node* temp = curr;
        curr = curr->next;
        delete temp;
    }

    return 0;
}