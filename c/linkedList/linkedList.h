#include "linkedList.c"

/* Insert a new node */
void insert (list_head * head, int data);

/* Delete a node by it's data */
int delete (list_head * head, int key);

/* Search a node by it's data */
list_node * search (list_head * head, int key);

/* List all inserted nodes */
void list (list_head * head);

/* Exclude all nodes */
void exclude (list_head * head);