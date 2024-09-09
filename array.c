#include <stdio.h>
int main()
{
    int a[10], i, j, k, temp = 0;
    printf("Enter the elements of array :\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the elements of array are :\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nenter choice :\nfor asending : 1\nfor disending : 2\n");
    scanf("%d", &k);
    switch (k)
    {
    case 1:
        for (j = 0; j < 10; j++)
        {
            for (i = 0; i < 10; i++)
            {
                if (a[i] > a[i + 1])
                {
                    temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;
                }
            }
        }
        for (i = 0; i < 10; i++)
        {
            printf("%d\t", a[i]);
        }

        break;
    case 2:

        for (j = 0; j < 10; j++)
        {
            for (i = 0; i < 10; i++)
            {
                if (a[i] < a[i + 1])
                {
                    temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;
                }
            }
        }
        for (i = 0; i < 10; i++)
        {
            printf("%d\t", a[i]);
        }

        break;

    default:
        printf("invalid choice");
        break;
    }
    return 0;
}