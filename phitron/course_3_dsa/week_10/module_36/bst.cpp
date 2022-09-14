#include <bits/stdc++.h>
using namespace std;

class treeNode
{
public:
    int data;
    treeNode *leftChild;
    treeNode *rightChild;

    treeNode(int value)
    {
        data = value;
        leftChild = NULL;
        rightChild = NULL;
    }
};

void printTree(treeNode *root, int level);
void spacePrint(int level);
void inOrder(treeNode *root, string &chk);
void preOrder(treeNode *root, string &chk);
void postOrder(treeNode *root, string &chk);

void inOrder(treeNode *root, string &chk) // root left right
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->leftChild, chk);
    chk += (to_string(root->data) + " ");
    inOrder(root->rightChild, chk);
}

void preOrder(treeNode *root, string &chk) // root left right
{
    if (root == NULL)
    {
        return;
    }
    chk += to_string(root->data);
    preOrder(root->leftChild, chk);
    preOrder(root->rightChild, chk);
}

void postOrder(treeNode *root, string &chk) // left right root
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->leftChild, chk);
    postOrder(root->rightChild, chk);
    chk += to_string(root->data);
}

void printTree(treeNode *root, int level)
{
    if (root == NULL)
    {
        return;
    }

    if (root->leftChild == NULL && root->rightChild == NULL)
    {
        cout << root->data << endl;
        return;
    }

    else
    {
        cout << endl;
        spacePrint(level);
        cout << "Root: " << root->data << endl;
    }

    if (root->leftChild != NULL)
    {
        spacePrint(level);
        cout << "Left: ";
        printTree(root->leftChild, level + 1);
    }

    if (root->rightChild != NULL)
    {
        spacePrint(level);
        cout << "Right: ";
        printTree(root->rightChild, level + 1);
    }
}

void spacePrint(int level)
{
    for (int i = 0; i < level; i++)
    {
        cout << "   ";
    }
}

treeNode *insertionBST(treeNode *root, int value)
{
    treeNode *newNode = new treeNode(value);

    if (root == NULL)
    {
        root = newNode;
        return root;
    }

    // value < root->data
    if (value < root->data)
    {
        root->leftChild = insertionBST(root->leftChild, value);
    }

    // value> root -> data
    else if (value > root->data)
    {
        root->rightChild = insertionBST(root->rightChild, value);
    }

    return root;
}

int main()
{
    int n;
    cin >> n;
    treeNode *root = NULL;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        root = insertionBST(root, value);
    }

    string traversal = "";
    inOrder(root, traversal);
    cout << "\n"
         << traversal;

    return 0;
}
