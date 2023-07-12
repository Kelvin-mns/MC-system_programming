#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;
int main()
{
    Node *head = malloc(sizeof(Node));
    if (head != NULL)
    {
        head->data = 1000;
        head->next = NULL;
    }
    printf("Head: %d\n", head->data);
    free(head);

    Node *first = malloc(sizeof(Node));
    if (first != NULL)
    {
        first->data = 300;
        first->next = NULL;
        head->next = first;
    }
    printf("first: %d\n", first->data);
    free(head);
    free(first);
    return 0;
}