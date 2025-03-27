#include<stdio.h>
#include<malloc.h>

struct node {

    int data;
    struct node *left,*right;
};

struct node *create(struct node *root)
{
    struct node *p=NULL,*temp=NULL;
    int i,n;
    printf("\nHow many values");
    scanf("%d",&n);
    printf("\nEnter actual values");
    for ( i = 0; i < n; i++)
    {
        p=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->left=p->right=NULL;

        if (root==NULL)
        {
            root=p;
        }
        else
        {
            temp=root;
        }
        while (temp!=NULL)
        {
            if(p->data<temp->data)
            {
                if (temp->left==NULL)
                {
                    temp->left=p;
                    break;
                }
                else
                temp=temp->left;
            }
            else if (p->data > temp->data)
            {
                if (temp->right==NULL)
                {
                    temp->right=p;
                    break;
                }
                else
                temp=temp->right;                
            }   
        }
    }return root; 
}
void inorder(struct node *root)
{
    struct node *ptr=NULL;
    ptr=root;
    if(ptr!=NULL)
    {
        inorder(ptr->left);
        printf("%d\t",ptr->data);
        inorder(ptr->right);
    }
}

struct node *treecopy(struct node * root)
{
    struct node *p=NULL;
    if(root==NULL)
        return 0;
    else
        {
            p=(struct node *)malloc(sizeof(struct node));
            p->data=root->data;
            p->left=treecopy(root->left);
            p->right=treecopy(root->right);
            return p;
        }
}

void main()
{
    struct node *root=NULL,*root1=NULL;
    struct node *create();
    struct node *treecopy();
    void inorder();


    printf("\ncreate a BST\n");
    root=create(root);
    inorder(root);
    printf("The copied Tree is");
    root1=treecopy(root);
    inorder(root1);
}