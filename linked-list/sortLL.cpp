// sorting of linked list in ascending order
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->next != NULL)
        {
            cout << temp->data << "->";
        }
        if (temp->next == NULL)
        {
            cout << temp->data << "->NULL";
        }
        temp = temp->next;
    }
}
Node *insertAtEnd(Node *head, int data)
{
    Node *temp = head;
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return head;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}
Node *insertAtHead(Node *head, int data)
{
    Node *nti = new Node(data);
    Node *temp = head;
    if (head == NULL)
    {
        head = nti;
        return head;
    }
    nti->next = head;
    head = nti;
    return head;
}
Node *insertAtPos(Node *head, int data, int pos)
{
    Node *nti = new Node(data);
    Node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    temp->next = nti;
    nti->next = temp->next->next;
    temp = nti;
    return head;
}
int main()
{
    Node *head = NULL;
    head = insertAtHead(head, 100);
    head = insertAtHead(head, 100);
    head = insertAtHead(head, 100);
    head = insertAtPos(head, 900, 1);
    head = insertAtPos(head, 400, 2);
    head = insertAtPos(head, 900, 3);
    head = insertAtHead(head, 100);
    head = insertAtEnd(head, 5);
    head = insertAtHead(head, 77777);
    head = insertAtEnd(head, 4);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 1);
    print(head);
    return 0;
}