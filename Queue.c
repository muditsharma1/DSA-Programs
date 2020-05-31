#include <stdio.h>
#include <stdlib.h>
#define cap 5
void insert();
void delete ();
void display();
int ch, front = 0, rear = 0, queue[cap];
int main()
{
    printf("Operations On Queue:\n");
    while (1)
    {
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Quit\n");
        printf("Enter Your Choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("INVALID INPUT!!");
            break;

            return 0;
        }
    }
}

void insert()
{
    if (cap == rear)
    {
        printf("Queue is Full");
    }
    else
    {
        int ele;
        printf("Enter The Element:\n");
        scanf("%d", &ele);
        queue[rear] = ele;
        rear++;
    }
}
void delete ()
{
    if (front == rear)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("deleted %d", queue[front]);
        for (int i = 0; i < rear - 1; i++)
        {
            queue[i] == queue[i + 1];
        }
        rear--;
    }
}
void display()
{
    if (front == rear)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("queue elements:");
        for (int i = front; i < rear; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}