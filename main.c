#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list[5];
    int i, d, a, n = 0;

    printf("Enter the elements of the array:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &list[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        n = 0;
        d = list[j];
        for (i = j + 1; i < 5; i++)
        {
            if (d < list[i])
            {
                d = list[i];
                n = i;
            }
        }
        if (d > list[j])
        {
            a = list[j];
            list[j] = d;
            list[n] = a;
        }
    }

    printf("Sorted array is:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d, ", list[i]);
    }

    return 0;
}
