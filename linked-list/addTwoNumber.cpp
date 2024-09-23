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
int main()
{
    Node *head = NULL;
    Node *head2 = NULL;
    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 4);
    head2 = insertAtEnd(head2, 1);
    head2 = insertAtEnd(head2, 2);
    head2 = insertAtEnd(head2, 3);
    head2 = insertAtEnd(head2, 4);
    head2 = insertAtEnd(head2, 5);
    print(head);
    cout << endl;
    print(head2);
    return 0;
}