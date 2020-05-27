#include <stdio.h>
#include <stdlib.h>
#define cap 5
void push();
int pop();
int IsFull();
int IsEmpty();
void traverse();
void peek();
int stack[cap], ch, item, top = -1;
int main()
{
    while (1)
    {
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Traverse\n");
        printf("5.Quit\n");
        printf("Enter Your Choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter the element:\n");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            item = pop();
            if (item == 0)
            {
                printf("Stack is Not Empty\n");
            }
            else
            {
                printf("Popped item : %d\n", item);
            }

            break;
        case 3:
            peek();

            break;
        case 4:
            traverse();

            break;
        case 5:
            exit(0);
            break;

        default:
            printf("Invalid Input!!");
            break;
        }
    }
    return 0;
}
int isFull()
{
    if (top == cap - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(int x)
{
    if (isFull())
    {
        printf("Stack is Full\n");
    }
    else
    {
        top++;
        stack[top] = x;
        printf("%d pushed \n", x);
    }
}
int pop()
{
    if (IsEmpty())
    {
        return 0;
    }
    else
    {
        return stack[top--];
    }
}
int IsEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void peek()
{
    if (IsEmpty())
    {
        printf("Stack Is Empty\n");
    }
    else
    {
        printf("peek element : %d\n", stack[top]);
    }
}
void traverse()
{
    if (IsEmpty())
    {
        printf("Stack Is Empty\n");
    }
    else
    {
        printf("stack elements are :\n");
        for (int i = 0; i <= top; i++)
        {
            printf("%d\n", stack[i]);
        }
    }
}