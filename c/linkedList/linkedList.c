#include <stdio.h>
#include <stdlib.h>

/* 
    Linked list data types 
*/
typedef struct list_node {
    int data;
    struct list_node * next;
} list_node;

typedef struct {
    list_node * first;
    int size;
} list_head;


/* 
    Linked list functions (insert, remove, search, list and exclude) 
*/
void insert (list_head * head, int data) {

    list_node * temp = head->first;

    if (!temp) {
        temp = malloc(sizeof(list_node));
        
        if(!temp){
            exit(1);
        }
    
        temp->data = data;
        temp->next = NULL;
        head->first = temp;
        head->size++;
        return;
    }

    while(temp->next){
        temp = temp->next;
    }

    temp->next = malloc(sizeof(list_node));

    if(!temp->next){
        exit(1);
    }

    temp->next->data = data;
    temp->next->next = NULL;
    head->size++;
}

int delete (list_head * head, int key) {
    list_node * temp = head->first;

    if(temp->data == key){
        head->first = temp->next;
        free(temp);
        head->size--;
        return 1;
    }

    while(temp->next) {
        if(temp->next->data == key) {
            list_node * swap = temp->next->next;
            free(temp->next);
            temp->next = swap;
            head->size--;
            return 1;
        }
        temp = temp->next;
    }

    return 0;
}

list_node * search (list_head * head, int key) {
    list_node * temp = head->first;

    while(temp) {
        if(temp->data == key) {
            return temp;
        }
        temp = temp->next;
    }

    return NULL;
}

void list (list_head * head) {
    
    list_node * temp = head->first;

    printf("\nListing data of nodes:\n");
    while(temp) {
        printf("- %d\n", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void exclude (list_head * head) {
    list_node * temp = head->first;

    printf("Excluding linked list of existence\n");
    while(temp) {
        list_node * swap = temp->next;
        free(temp);
        temp = swap;
    }
    head->first = NULL;
    head->size = 0;
}