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
        cout << temp->data << ' ';
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
int midNode(Node *&head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}
int main()
{
    Node *head = new Node(0);
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 41);
    insertAtEnd(head, 3);
    print(head);
    cout << endl
         << "the mid Node of Linked List is " << endl
         << midNode(head);
    return 0;
}