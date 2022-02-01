#include "linkedList.h"

int main () {

    list_head head;
    head.size = 0;
    head.first = NULL;

    printf("Inserting nodes\n");
    insert(&head, 1);
    insert(&head, 2);

    list(&head);

    printf("Search data:\n");
    int key = 3;
    list_node * searchNode = search(&head, key);

    if(!searchNode){
        printf("- Data %d not found in search\n", key);
    } else {
        printf("- Data %d found in search\n", key);
    }
    key = 1;
    searchNode = search(&head, key);

    if(!searchNode){
        printf("- Data %d not found in search\n", key);
    } else {
        printf("- Data %d found in search\n", key);
    }
    printf("\n");

    printf("Deleting nodes:\n");
    key = 3;
    printf("Delete status of %d: %d\n", key, delete(&head, key));
    key = 2;
    printf("Delete status of %d: %d\n", key, delete(&head, key));

    list(&head);

    exclude(&head);

    return 0;
}