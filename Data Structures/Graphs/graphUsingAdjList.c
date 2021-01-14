#include<stdio.h>
#include<stdlib.h>

//structure to represent an adjacency list node
struct AdjListNode
{
    int dest;
    struct AdjListNode* next;
};

//structure to represent an adjacency list
struct AdjList
{
    struct AdjListNode *head;
};

//structure to represent a graph.
//a graph is an array of adjacency lists
//size of array will be V(no of vertices)
struct graph
{
    int V;
    struct AdjList* array;
};


int main(){
    int v = 5;
    
}