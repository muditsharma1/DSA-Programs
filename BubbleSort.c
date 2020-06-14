#include <stdio.h>
bubble_sort(int a[], int n)
{
    int temp;
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int a[4] = {5, 3, 2, 1};
    bubble_sort(a, 4);
    for (int k = 0; k < 4; k++)
    {
        printf("%d ", a[k]);
    }

    return 0;
}