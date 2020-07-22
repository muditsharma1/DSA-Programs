#include <stdio.h>
#include <stdlib.h>
struct node *root = NULL;
struct node
{
    int data;
    struct node *link;
};
void append(head)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter Node Data:\n");
    scanf("%d", &temp->data);
    temp->link = NULL;
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        struct node *ptr;
        ptr = root;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = temp;
    }
}
/*
int length(head)
{
    int count = 0;
    struct node *temp;
    temp = root;
    while (temp != NULL)
    {
        count++;
        temp = temp->link;
    }
    return count;
}
*/
void display(head)
{
    if (root == NULL)
    {
        printf("ERROR!! linked List Is Empty\n");
    }
    struct node *ptr = NULL;
    ptr = root;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}
void InsertAtBeginning()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter The value to be inserted:\n");
    scanf("%d", &newnode->data);
    if (root == NULL)
    {
        printf("ERROR!! linked List Is Empty\n");
    }
    else
    {
        newnode->link = root;
        root = newnode;
    }
}
void InsertAtEnd()
{
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter The value to be inserted:\n");
    scanf("%d", &newnode->data);
    newnode->link = NULL;
    while (temp->link != NULL)
    {
        root = NULL;
    }
    root = newnode;
}
void DeleteAtBeginning()
{
    if (root == NULL)
    {
        printf("ERROR!! linked List Is Empty\n");
    }
    else
    {
        struct node *temp;
        temp = root;
        root = root->link;
        free(temp);
    }
}
void DeleteAtEnd()
{
    if (root == NULL)
    {
        printf("ERROR!! linked List Is Empty\n");
    }
    struct node *prevnode, *temp;
    temp = root;
    while (temp->link != 0)
    {
        prevnode = temp;
        temp = temp->link;
    }
    if (temp == root)
    {
        root = 0;
    }
    else
    {
        prevnode->link = 0;
    }
    free(temp);
}
void ReverseLinkedList()
{
    struct node *prevnode, *currentnode, *nextnode;
    prevnode = 0;
    currentnode = nextnode = root;
    while (nextnode != 0)
    {
        nextnode = nextnode->link;
        currentnode->link = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    root = prevnode;
}
int main()
{
    printf("Operations Used in Single Linked List:\n");
    int ch, item;
    while (1)
    {
        printf("1.Append\n");
        printf("2.AddAtBeginning\n");
        printf("3.AddAtEnd\n");
        printf("4.Length\n");
        printf("5.Display\n");
        printf("6.DeleteAtBeginning\n");
        printf("7.DeleteAtEnd\n");
        printf("8.Reverse\n");
        printf("9.Quit\n");
        printf("Enter Your Choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            append(item);
            break;
        case 2:
            InsertAtBeginning();
            break;
        case 3:
            InsertAtEnd();
            break;
            /*
        case 4:
            length();
            break;
            */
        case 5:
            display(root);
            break;
        case 6:
            DeleteAtBeginning();
            break;
        case 7:
            DeleteAtEnd();
            break;
        case 8:
            ReverseLinkedList();
            break;
        default:
            printf("Invalid Input!!");
            break;
        }
    }
    return 0;
}