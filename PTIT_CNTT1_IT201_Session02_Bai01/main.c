#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    do
    {
        printf(" nhập số phần tử có trong mảng từ (0-100]");
        scanf("%d",&n);


    } while ( n>100 || n<=0);
    int *arr = (int*)malloc(n*sizeof(int));
    if ( arr == NULL )
    {
        printf("chua duoc cap phat bo nho");
        return 1;
    }

    for (int i=0;i<n;i++)
    {
        printf(" nhập phần tử thứ %d",i+1);
        scanf("%d",&arr[i]);
    }
    int max= arr[0];
    for(int i=1;i<n;i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf(" phần tử lớn nhất là %d",max);
    free(arr);
    return 0;
}
