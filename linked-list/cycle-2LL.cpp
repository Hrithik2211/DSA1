// to detect the starting node of loop in linked list
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
Node* cycleNode(Node* &head)
{
    Node* slow = head;
    Node* fast = head;
    while (fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            Node* intersect = head;
            while(intersect != slow)
            {
                intersect = intersect->next;
                slow = slow->next;
            }
            return intersect;
        }
    }
    return nullptr;
}
int main()
{
    return 0;
}