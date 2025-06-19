#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    do
    {
        printf("nhập so phan tu co tư 1-100 ");
        scanf("%d", &n);

    } while (n < 1 || n > 100) ;
    int *arr = (int*)malloc(sizeof(int) * n);
    if (arr == NULL)
    {
        printf("chua đuọc cap phat ");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("nhap phat tu thứ %d",i+1);
        scanf("%d", &arr[i]);

    }
    for (int i = 0; i < n/2; i++)
    {
        int tmep = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = tmep;
    }
    printf(" key qua khi dao nguoc mang");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}
