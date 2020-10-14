#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TEST_NUMBER 100

typedef struct node{
	struct node * l, * r;
	int value;
} node;

// [ left, visit, right ] 
void in(node * n){
	if(n->l) in(n->l);
	printf("%d ", n->value);
	if(n->r) in(n->r);
}

// [ visit, left, right ] 
void pre(node * n){
	printf("%d ", n->value);
	if(n->l) pre(n->l);
	if(n->r) pre(n->r);
}

// [ left, right, visit ] 
void post(node * n){
	if(n->l) post(n->l);
	if(n->r) post(n->r);
	printf("%d ", n->value);
}

// create a new node & set default nodes
node * new(int value){
	node * n = malloc(sizeof(node));
	n->value = value;
	n->l = n->r = NULL;
	return n;
}

// recursive insertion from the tree root
void insert(node ** root, node * child){
	
	if(!*root) *root = child;  // tree root not exists
	
	else insert( child->value <= (*root)->value ? &(*root)->l : &(*root)->r , child );  // recursive call

	/*
		that is ->
		
		else if(child->value <= (*root)->value)
			insert(&(*root)->l, child); 	  // child value is minor/equal to current node call insertion on left node
	
		else
			insert(&(*root)->r, child); 	  // call insertion on right node
	*/
}

// recursive search of a node
node * search(node * root, int value){
	return !root ? NULL : root->value == value ? root : search( value > root->value ? root->r : root->l , value );
	/*
		that is -->
		if(root == NULL)
			return NULL;  		         // node not found
		else if (root->value == value)
			return root; 		         // first node address found
	
		else if(value > root->value)
			search(root->r,value);	     // resursive search on right side of tree
		else
			search(root->l,value);       // resursive search on left side of tree
 	*/
}

// save search result in pointer param
void searchByPointer(node * root, int value, node ** save){
	*save = search(root,value);
}

int main(){
	
	int test, c, success;
	test = c = success = 0;

	srand(time(NULL));

	node * root = NULL;

	// INSERTION TEST 

	while(c++ < TEST_NUMBER)
		insert(&root, new(rand() % 150));	

	// PRINT TEST

	printf("\n > IN ORDER -> ");
	in(root);

	printf("\n\n > PRE ORDER -> ");
	pre(root);

	printf("\n\n > POST ORDER -> ");
	post(root);

	// SEARCH TEST

	puts("\n\n > TEST SEARCH:");

	while(test++ < TEST_NUMBER)
		if(search(root, test) > 0){
	 		printf("  - %d\n", test);
	 		success++;
		}

	printf("\n <SUCCESS> = %d <FAILED> = %d\n", success, TEST_NUMBER - success);

}