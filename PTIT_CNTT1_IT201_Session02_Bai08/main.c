#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    do
    {
        printf(" nhap so phan tu co trong mang");
        scanf("%d", &n);

    } while (n < 0);
    int *arr = (int*)malloc(n * sizeof(int));
if (arr == NULL)
{
    printf("chua cấp phát");
    return 1;
}
    for (int i = 0; i < n; i++)
    {
        printf(" nhap phan tu thu %d", i + 1);
        scanf("%d", &arr[i]);
    }
    printf(" cac phan tu có lon hon phan tu dung sau");
    int *mang = (int*)malloc(n * sizeof(int));
    if (mang == NULL)
    {
        printf("kh duoc cap phat");
    }
    int count=0;
    int maxphai=arr[n-1];
    mang[count++]=maxphai;
    for (int i=n-2;i>0;i--)
    {
        if (arr[i]>maxphai)
        {
            mang[count++]=arr[i];
            maxphai=arr[i];
        }
    }
    printf(" max phan tu lon hon phan tu dung sau");
    for (int i=count-1; i>=0; i--)
    {
        printf(" %d", mang[i]);
    }
    printf("\n");
    free(arr);
    free(mang);

    return 0;
}
