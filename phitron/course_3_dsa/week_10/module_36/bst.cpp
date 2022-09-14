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

void inOrder(treeNode *root) // root left right
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->leftChild);
    cout << root->data << " ";
    inOrder(root->rightChild);
}

void insertionBST(treeNode *&root, int value)
{
    if (root == NULL)
    {
        root = new treeNode(value);
        return;
    }

    // value < root->data
    if (value < root->data)
    {
        insertionBST(root->leftChild, value);
    }

    // value > root -> data
    else
    {
        insertionBST(root->rightChild, value);
    }
}

void levelOrder(treeNode *root)
{
    queue<treeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        treeNode *root = q.front();
        q.pop();
        cout << root->data << endl;
        if (root->leftChild != NULL)
        {
            q.push(root->leftChild);
        }
        if (root->rightChild != NULL)
        {
            q.push(root->rightChild);
        }
    }
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
        insertionBST(root, value);
    }

    levelOrder(root);

    return 0;
}
