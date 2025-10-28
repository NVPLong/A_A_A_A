#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, k;
    int a[100];
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    int Del = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != k)
        {
            a[Del] = a[i];
            Del++;
        }
    }
    if (Del == 0)
    {
        printf("INVALID");
    }
    else
    {
        for (int i = 0; i < Del; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}