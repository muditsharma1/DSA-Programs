#include <stdio.h>
int main()
{
    int a[11] = {2, 3, 5, 9, 14, 16, 19, 25, 29, 32, 35}, found = 0, ele;
    int low = 0;
    int high = 10; //n-1
    printf("enter the element you want to search:\n");
    scanf("%d", &ele);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (ele < a[mid])
        {
            high = mid - 1;
        }
        else if (ele > a[mid])
        {
            low = mid + 1;
        }
        else if (ele == a[mid])
        {
            printf("Found at Index %d\n", mid+1);
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