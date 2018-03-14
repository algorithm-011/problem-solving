#include <iostream>

using namespace std;

typedef struct NODE
{
    char data;
    struct NODE *left;
    struct NODE *right;
}NODE;

void insert(NODE *root, char data, char left, char right);
void preorder(NODE *root);
void inorder(NODE *root);
void postorder(NODE *root);
void find(NODE *root, char data);

NODE *temp;

void insert(NODE *root, char data, char left, char right)
{
    NODE *left_node = new NODE, *right_node = new NODE;

    temp = root;
    if(data != 'A')
        find(root, data);

    left_node->data = left;
    left_node->left = NULL;
    left_node->right = NULL;

    right_node->data = right;
    right_node->left = NULL;
    right_node->right = NULL;

    temp->left = left_node;
    temp->right = right_node;
}

void preorder(NODE *root)
{
    if(root == NULL || root->data == '.')
        return;
    printf("%c", root->data);
    if(root->left != NULL)
        preorder(root->left);
    if(root->right != NULL)
        preorder(root->right);
}

void inorder(NODE *root)
{
    if(root->data == '.')
        return;

    if(root->left != NULL)
        inorder(root->left);
    printf("%c", root->data);
    if(root->right != NULL)
        inorder(root->right);
}

void postorder(NODE *root)
{
    if(root->data == '.')
        return;

    if(root->left != NULL)
        postorder(root->left);
    if(root->right != NULL)
        postorder(root->right);
    printf("%c", root->data);
}

void find(NODE *root, char data)
{
    if(root->data == data)
    {
        temp = root;
        return;
    }

    if(root->left != NULL)
        find(root->left, data);
    if(root->right != NULL)
        find(root->right, data);

    return;
}

int main(void)
{
    NODE *root = new NODE;
    int n;
    cin >> n;

    root->data = 'A';
    root->left = NULL;
    root->right = NULL;

    for(int i=0; i<n; i++)
    {
        char data, left, right;
        cin >> data >> left >> right;
        insert(root, data, left, right);
    }

    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;

    delete root;
    delete temp;
    return 0;
}
