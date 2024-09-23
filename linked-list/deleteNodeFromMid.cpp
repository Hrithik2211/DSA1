// deleting the node from middle of linked list
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
Node* delNode(Node* &head)
{
    Node* slow = head;
    Node* fast = head;
    Node* prev=nullptr;
    while (fast->next != nullptr)
    {
        prev=slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* ntd = slow;
    prev->next = ntd->next;
    delete ntd;
    return head;

}
int main()
{
    Node *head = NULL;
    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 4);
    head = insertAtEnd(head, 5);
    print(head);
    delNode(head);
    cout<<"\nAfter deleting mid node"<<endl;
    print(head);
    return 0;
}