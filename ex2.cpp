#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a[100];
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    if (k < 1 || k > n)
    {
        printf("INVALID");
    }
    else
    {
        printf("%d", a[k - 1]);
    }

    return 0;
}