#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	char elem;
	node * left;
	node * right;
}node;
node * arr[26]={0,};
void inorder(node *root)
{
	if(root)
	{
		inorder(root->left);
		if(root->elem!='.')
			printf("%c",root->elem);
		inorder(root->right);
	}
}
void preorder(node *root) 
{
	if(root)
	{
		if(root->elem!='.')	
			printf("%c",root->elem);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(node *root)
{
	if(root)
	{
		postorder(root->left);
		postorder(root->right);
		if(root->elem!='.')
			printf("%c",root->elem);
	}
}
int main()
{
	int line,i,j,k;
	char e;
	scanf("%d",&line);
	for(i=0;i<line*3;i++)
	{
		scanf(" %c",&e);
		arr[i]=(node *)malloc(sizeof(node));
		arr[i]->left=arr[i]->right=NULL;
		arr[i]->elem=e;
		if(i%3==1)
			arr[i-1]->left=arr[i];
		else if(i%3==2)
			arr[i-2]->right=arr[i];
	}
	for(k=0;k<i;k++)
	{
		if(k%3==0)
		{
			for(j=0;j<k;j++)
			{
				if(arr[k]->elem==arr[j]->elem)
				{
					arr[j]->left=arr[k]->left;
					arr[j]->right=arr[k]->right;
					break;
				}
			}
		}
	}
	preorder(arr[0]);
	puts("");
	inorder(arr[0]);
	puts("");
	postorder(arr[0]);
}