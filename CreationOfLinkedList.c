#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
DisplayLinkedList(struct node *head)
{
    if (head == NULL)
    {
        printf("LINKED LIST is empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    printf("DISPLAY LINKED LIST\n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    //CREATING A LINKED LIST
    struct node *newnode, *head, *temp;
    head = NULL;
    int data;
    printf("\nCREATE LINKED LIST\nEnter -1 to stop\n");
    printf("Enter data:\n");
    scanf("%d", &data);
    newnode->next = NULL;
    while (data != -1)
    {
        newnode = (struct node *)malloc(sizeof(struct node *));
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Enter data:\n");
        scanf("%d", &data);
    }
    DisplayLinkedList(head);
    return 0;
}