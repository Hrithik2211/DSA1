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
int loopLength(Node* &head)
{
    Node* slow = head;
    Node* fast = head;
    while (fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow)
        {
            Node* intersect = head;
            while (intersect != slow)
            {
                intersect = intersect->next;
                slow = slow->next;
            }
            int cnt = 1;
            while(slow != fast)
            {
                slow = slow->next;
                cnt++;
            }
            return cnt;
            
        }
    }
    return -1; 
    
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