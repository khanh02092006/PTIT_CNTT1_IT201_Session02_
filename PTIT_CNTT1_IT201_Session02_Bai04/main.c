#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    do
    {
        printf(" nhap so phan tu trong mang tu 1-100");
        scanf("%d", &n);
    } while (n < 1 || n > 100);
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("chua duoc cap phat do nho ");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf(" nhap phan tu thu %d",i+1);
        scanf("%d", &arr[i]);
    }
    int pos,value_new;
    do
    {
        printf("nhap vi tri muon sua" );
        scanf("%d", &pos);
    } while (pos < 1 || pos > n);
    printf(" nhap gia tri moi tai %d",pos);
    scanf("%d", &value_new);
    arr[pos-1] = value_new;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
free(arr);
    return 0;
}
