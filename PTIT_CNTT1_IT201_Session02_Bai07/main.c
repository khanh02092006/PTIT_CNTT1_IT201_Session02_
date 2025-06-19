#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    do
    {
        printf("nhap so phan tu trong mang");
        scanf("%d", &n);
    } while (n >100 || n < 0);
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("chua cap phat ");
    }
    for (int i = 0; i < n; i++)
    {
        printf(" nhạp phan tu thu %d",i+1);
        scanf("%d", &arr[i]);
    }
    int key;
    printf(" nhap so nguyen can tim tong cua 2 phan tu");
    scanf("%d", &key);
    int coud=0;
    for (int i=0; i < n-1 &&!coud ; i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]+arr[j] == key)
            {
                printf(" tim thay %d +%d=%d ",arr[i],arr[j],key);
                coud=1;
                break;
            }
        }
    }
    if (!coud)
    {
        printf(" no co ");
    }
    free(arr);
    return 0;
}
