#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int SochanNhoNhat;
    int Solelonnhat;
    int CoSole = 0;
    int CoSoChan = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            if (!CoSoChan || a[i] < SochanNhoNhat)
            {
                SochanNhoNhat = a[i];
                CoSoChan = 1;
            }
        }
        else
        {
            if (!CoSole || a[i] > Solelonnhat)
            {
                Solelonnhat = a[i];
                CoSole = 1;
            }
        }
    }
    if (CoSoChan)
    {
        printf("So Chan Nho Nhat:%d", SochanNhoNhat);
    }
    else
    {
        printf("khong co so chan");
    }
    if (CoSole)
    {
        printf("So Le Lon Nhat:%d", Solelonnhat);
    }
    else
    {
        printf("Khong co So le");
    }
    return 0;
}