#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    int n;
    do
    {
        printf(" nhap so phan tu co trong mang tu 1-100");
        scanf("%d", &n);
    }while (n < 1 || n > 100);
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf(" chua duoc cap phat bôp nho");
        return 1;
    }
for (int i=0; i < n; i++)
{
    printf(" nhập pần t thứ %d ",i+1);
    scanf("%d", &arr[i]);
}
    int pos;
    do
    {
        printf(" nhap vi tri muon xoa (1-%d)",n);
        scanf("%d", &pos);

    } while (pos < 1 || pos > n);
    for (int i = pos -1; i< n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    printf(" mang sau khi xoa");
    for (int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    free(arr);
    return 0;
}
