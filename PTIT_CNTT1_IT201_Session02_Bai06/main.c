#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    do
    {
        printf(" nhập so phan tu:");
        scanf("%d", &n);

    } while (n <=0 || n > 100);
    int *arr = (int*)malloc(n*sizeof(int));
    if (arr == NULL)
    {
        printf(" chua duoc cap phat ");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf(" nhap pjan thu %d ",i+1);
        scanf("%d", &arr[i]);
    }
    int pos;
    int value;
    do
    {
        printf(" nhap vi tri  phan tu muon them vao");
        scanf("%d", &pos);
    } while (pos < 1 || pos > n);
    printf(" nhap gia tri muon them vao");
    scanf("%d", &value);
    arr= realloc(arr,n*sizeof(int));
    if (arr == NULL)
    {
        printf(" chua duoc cap phat ");
        return 1;
    }
    for (int i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    n++;
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    free(arr);


    return 0;
}
