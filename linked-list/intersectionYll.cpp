// find the intersection node of 2 linked list
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
Node* intersectionLL(Node* &head1,Node* &head2)
{
    Node* temp1 = head1;
    Node* temp2 = head2;
    int length1 = 0;
    int length2 = 0;
    while (temp1 != nullptr)
    {
        length1++;
        temp1 = temp1->next;
    }
    while (temp2 != nullptr)
    {
        length2++;
        temp2 = temp2->next;
    }
    temp1 = head1;
    temp2 = head2;
    int netLength = abs(length1 - length2);
    if (length1 > length2)
    {
        while (netLength--)
        {
            temp1=temp1->next;
        }
        
    }
    if (length1 < length2)
    {
        while (netLength--)
        {
            temp2=temp2->next;
        }
        
    }
    while (temp1 != nullptr && temp2 != nullptr)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
        if (temp1 == temp2)
        {
            return temp1;
        }
        
    }
    return nullptr;
    
    
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
    return 0;
}