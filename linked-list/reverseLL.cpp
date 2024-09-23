#include <iostream>
using namespace std;
// Linked list class structure
class Node
{
public:
    int val;
    Node *next;
    // constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertHead(Node *&head, int d)
{
    
    Node *nti = new Node(d);
    nti->next = head;
    head = nti;
}
void reverseList(Node *&head)
{
    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}

void recRev(Node *prev, Node *&current, Node *&head)
{
    if (current == NULL)
    {
        head = prev;
        return;
    }

    Node *next = current->next;
    current->next = prev;

    recRev(current, next, head);
}

void printList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node = new Node(0);
    Node *head = node;
    insertHead(head, 1);
    insertHead(head, 2);
    insertHead(head, 3);
    insertHead(head, 4);
    insertHead(head, 5);
    insertHead(head, 6);
    cout << "Normal linked list" << endl;
    printList(head);
    cout << "Reversed linked list" << endl;
    reverseList(head);
    printList(head);
    cout << "using recursion to reverse list" << endl;
    
    recRev(nullptr, head, head);
    printList(head);
    return 0;
}