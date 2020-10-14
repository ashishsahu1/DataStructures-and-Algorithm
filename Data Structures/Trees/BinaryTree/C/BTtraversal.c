// C program for different tree traversals 
#include <stdio.h> 
#include <stdlib.h> 
  
/* A binary tree node has data, pointer to left child 
   and a pointer to right child */
struct node 
{ 
     int data; 
     struct node* left; 
     struct node* right; 
}; 
  
/* Helper function that allocates a new node with the 
   given data and NULL left and right pointers. */
struct node* newNode(int data) 
{ 
     struct node* node = (struct node*) 
                                  malloc(sizeof(struct node)); 
     node->data = data; 
     node->left = NULL; 
     node->right = NULL; 
  
     return(node); 
} 
/************ Traversal Algorithms ************/

void printInorder(struct node* root)
{
     if (root == NULL)
     {
          return;
     } 
     printInorder(root->left);
     printf("%d\t",root->data);
     printInorder(root->right);
}

void printPreorder(struct node* root)
{
     if (root == NULL)
     {
          return;
     }
     printf("%d\t",root->data);
     printPreorder(root->left);
     printPreorder(root->right);
}

void printPostorder(struct node* root)
{
     if (root == NULL)
     {
          return;
     }
     printPostorder(root->left);
     printPostorder(root->right);
     printf("%d\t",root->data);
}

/**********************************************/

/* Driver program to test above functions*/
int main() 
{ 
     struct node *root  = newNode(1); 
     root->left  = newNode(2); 
     root->right  = newNode(3); 
     root->left->left  = newNode(4); 
     root->left->right = newNode(5);  
  
     printf("\nPreorder traversal of binary tree is \n"); 
     printPreorder(root); 
  
     printf("\nInorder traversal of binary tree is \n"); 
     printInorder(root);   
  
     printf("\nPostorder traversal of binary tree is \n"); 
     printPostorder(root); 
  
     getchar(); 
     return 0; 
} 