#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int val)
    {
        value = val;
        next = NULL;
    }
};

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(Node *n)
{
    while (n != NULL)
    {
        cout << n->value;
        if(n->next != NULL)
        {
            cout<<" -> ";
        }
        n = n->next;
    }
    cout << endl
         << endl;
}

int main()
{
    Node *head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 5);
    insertAtTail(head, 8);
    insertAtTail(head, 9);

    display(head);

    return 0;
}