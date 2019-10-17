#include <stdio.h>
#include <stdlib.h>
typedef struct list{
    int item;
    struct list *next;
}List;

int main() {
    List *node3 = malloc(sizeof(List));
    List *node2 = malloc(sizeof(List));
    List *node1 = malloc(sizeof(List));

    node3->item = 3;
    node2->item = 2;
    node1->item = 1;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    List * pointer = node1; //Head
    List * previousNode = NULL; //NULL
    while (pointer->next != NULL)
    {
        //Delete node2 in this case. Is that what you want?
        if(pointer->next->item == 2){
            pointer->next = pointer->next->next; //Will skip the node in front of it.
        }
        previousNode = pointer;
        pointer = pointer->next;
    }
    printf("Node1->Next->Item = %d", node1->next->item);
}