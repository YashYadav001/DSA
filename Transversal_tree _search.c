#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node* left;
   struct node* right;
};
struct node* node1(int data)
{
   struct node* node
       = (struct node*)malloc(sizeof(struct node));
   node->data = data;
   node->left = NULL;
   node->right = NULL;

   return (node);
}

void printInorder(struct node* node){
   if (node == NULL)
       return;

   // from left->root->right
   printInorder(node->left);
   printf("%d ", node->data);
   printInorder(node->right);
}

void printPostorder(struct node* node){
    if (node == NULL)
      return ;
    
    //from left->right->root
    printPostorder(node->left);
    printPostorder(node->right);
    printf("%d", node->data);
}

void printPreorder(struct node* node){
    if (node == NULL)
      return ;
    
    //from root->left->right
    printf("%d", node->data);
    printPreorder(node->left);
    printPreorder(node->right);
}


int main() {
    struct node * root = node1(7);
    root->left = node1(2);
    root->right = node1(3);
    root->left->left = node1(1);
    root->left->right = node1(NULL);
    root->right->left = node1(NULL);
    root->right->right = node1(4);
    
    printf("The Inorder is\n");
    printInorder(root); 
    
    
    printf("the Postorder is \n");
    printPostorder(root);
    
    printf("the Preorder is \n");
    printPreorder(root);
    
    
    
    
 return 0 ;
}