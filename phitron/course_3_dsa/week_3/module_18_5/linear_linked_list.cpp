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

void insertAtHead(Node *&head, int val);
void insertAtTail(Node *&head, int val);
void display(Node *n);
int countLength(Node *&head);
void insertionAtSpecificPosition(Node *&head, int pos, int val);

void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

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
        if (n->next != NULL)
        {
            cout << " -> ";
        }
        n = n->next;
    }
    cout << endl
         << endl;
}

int countLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertionAtSpecificPosition(Node *&head, int pos, int val)
{
    int i = 0;
    Node *temp = head;

    while (i < pos - 2)
    {
        temp = temp->next;
        i++;
    }

    Node *newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}

int main()
{
    Node *head = NULL;

    int value;
    int pos;

    cout << "Choice 1: Insertion at Head"
         << endl
         << "Choice 2: Insertion at Tail"
         << endl
         << "Choice 3: Insertion at Specific Position"
         << endl
         << "Choice 0: Exit"
         << endl
         << endl;

    cout << "Next Choice: ";
    int choice;
    cin >> choice;
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the value: ";
            cin >> value;
            insertAtTail(head, value);
            break;
        case 2:
            cout << "Enter the value: ";
            cin >> value;
            insertAtHead(head, value);
            break;
        case 3:
            cout << "Enter the Desired Postion: ";
            cin >> pos;
            cout << "Enter the value: ";
            cin >> value;
            insertionAtSpecificPosition(head, pos, value);
        default:
            break;
        }
        cout << "Next Choice: ";
        cin >> choice;
    }

    cout << endl
         << "Linked List: ";
    display(head);
    cout << "Length of the List: " << countLength(head) << endl;

    return 0;
}