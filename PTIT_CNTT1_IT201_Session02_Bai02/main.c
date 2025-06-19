#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
do
{
    printf(" nhập so phần tử có trong mảng (0-100]");
    scanf("%d",&n);
} while (n <= 0 || n > 100);
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf(" chua duoc cap phatbo nho");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf(" nhập pần tử thu %d ",i+1);
        scanf("%d",&arr[i]);
    }
    int mumber;
    int dem=0;
    printf(" nhap so ma muon dem so lan xuat hien");
    scanf("%d",&mumber);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mumber) dem++;
    }
    printf(" %d xuat hien %d lan",mumber,dem);
    free(arr);

    return 0;
}
