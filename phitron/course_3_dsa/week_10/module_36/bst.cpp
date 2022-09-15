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

// treeNode *insertionBST(int l, int r, int a[])
// {
//     if (l > r)
//     {
//         return NULL;
//     }

//     int mid = l + (r - l) / 2;
//     treeNode *newNode = new treeNode(a[mid]);
//     newNode->leftChild = insertionBST(l, mid - 1, a);
//     newNode->rightChild = insertionBST(mid + 1, r, a);
//     return newNode;
// }

treeNode *insertionBST(treeNode *root, int value)
{
    if (root == NULL)
    {
        treeNode *newNode = new treeNode(value);
        return newNode;
    }

    if (value < root->data)
    {
        root->leftChild = insertionBST(root->leftChild, value);
    }
    else
    {
        root->rightChild = insertionBST(root->rightChild, value);
    }
    return root;
}

void levelOrder(treeNode *root)
{
    queue<treeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        treeNode *root = q.front();
        q.pop();
        cout << root->data << " ";
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

treeNode *searchBST(treeNode *root, int value)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == value)
    {
        cout << root->data;
        return root;
    }
    else if (value < root->data)
    {
        cout << root->data << " -> ";
        searchBST(root->leftChild, value);
    }
    else
    {
        cout << root->data << " -> ";
        searchBST(root->rightChild, value);
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
        int a;
        cin >> a;
        root = insertionBST(root, a);
    }

    inOrder(root);

    int key;
    cin >> key;
    if (searchBST(root, key) == NULL)
    {
        cout << endl
             << "Value does not exist in the BST";
    }
    else
    {
        cout << endl
             << "Value exists in the BST";
    }

    return 0;
}

/*
9
11 5 9 43 34 1 2 7 21
*/