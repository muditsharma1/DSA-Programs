#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50}, ele, found=0;
    printf("Enter the element you want to search:\n");
    scanf("%d", &ele);
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == ele)
        {
            printf("Found at Index %d", i+1);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        {
            if (!found)
            {
                printf("Not Found\n");
            }
        }
    }
    return 0;
}