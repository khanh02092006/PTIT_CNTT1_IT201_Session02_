#include <stdio.h>
int demsolanxaphien(int arr[],int n,int x){
    int dem=0;
    for (int i=0;i<n;i++)
    {
        if (arr[i]== x)
        {
            dem++;
        }
    }
    return dem;

}
int main(void)
{
int n,x;
    printf(" nhập số phần tử co trong mang là:\n",n);
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf(" nhập phần tử thứ %d ",i+1);
        scanf("%d",&arr[i]);

    }
    printf(" nhập phần tử muốn tìm ");
    scanf("%d",&x);
    int dem=demsolanxaphien(arr,n,x);
    printf("số lần %d xuất hiện %d lần trong mang \n",x,dem);
// // Độ phức tạp thời gian: O(n)
// Độ phức tạp không gian: O(1)
return 0;
}
