#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right
};
struct node *creat()
{
    int x;
    struct node *newnode;
    printf("enter data (-1 for end)\n");
    scanf("%d",&x);
    if(x==-1)
    return NULL;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    printf("enter left child for %d",x);
    newnode->left=creat();
    printf("enter right child for %d",x);
    newnode->right=creat();
    return newnode;
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
      
    }
}

int main()
{
    struct node *root;
    root=creat();
    printf("inorder sequence:\n");
    inorder(root);
    printf("\n");
    printf("preorder sequence:\n");
    preorder(root);
    printf("\n");
    printf("postorder sequence:\n");
    postorder(root);
}