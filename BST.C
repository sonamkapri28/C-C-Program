#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int key;
	struct node *left, *right;
};
struct node *newnode(int item)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->key=item;
	temp->left=temp->right=NULL;
	return temp;
}
void inorder(struct node *root)
{
	if(root != NULL)
	{
		inorder(root->left);
		printf("%d\t",root->key);
		inorder(root->right);
	}
}
void preorder(struct node *root)
{
	if(root != NULL)
	{
		printf("%d\t",root->key);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct node *root)
{
	if(root != NULL)
	{
		preorder(root->left);
		preorder(root->right);
		printf("%d\t",root->key);
	}
}

struct node * insert(struct node *node,int key)
{
	if(node==NULL)
		return newnode(key);
	if(key < node->key)
		node->left=insert(node->left,key);
	else if(key > node->key)
		node->right=insert(node->right,key);
	return node;
}
void main()
{
	struct node *root=NULL;
	clrscr();
	root=insert(root,50);
	root=insert(root,30);
	root=insert(root,20);
	root=insert(root,40);
	root=insert(root,70);
	root=insert(root,60);
	root=insert(root,80);
	printf("\nPreorder Traversal \n\n");
	preorder(root);
	printf("\n\nInorder Traversal \n\n");
	inorder(root);
	printf("\n\nPostorder Traversal \n\n");
	postorder(root);
	getch();
}