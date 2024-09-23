#include <iostream>

struct Node
{
    int data;
    Node *next;
};

void deleteNode(Node **head, int position)
{
    Node *temp = *head;
    // to remove from first position
    if (position == 0)
    {
        *head = temp->next;
        delete temp;
        return;
    }
    int length = 6;
    int mover = 1;
    while (mover != (length - position))
    {
        mover++;
        temp = temp->next;
    }
    Node *newNode = temp->next->next;
    delete temp->next;
    temp->next = newNode;
}

void printList(Node *node)
{
    while (node != nullptr)
    {
        std::cout << node->data << " ";
        node = node->next;
    }
    std::cout << std::endl;
}

int main()
{
    Node *head = nullptr;
    Node *second = nullptr;
    Node *third = nullptr;
    Node *fourth = nullptr;
    Node *fifth = nullptr;
    Node *sixth = nullptr;

    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();
    fifth = new Node();
    sixth = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = sixth;

    sixth->data = 6;
    sixth->next = nullptr;

    std::cout << "Linked List before deletion: ";
    printList(head);

    int position = 6; // deleting the node from position of node to delete
    deleteNode(&head, position);

    std::cout << "Linked List after deletion: ";
    printList(head);

    return 0;
}