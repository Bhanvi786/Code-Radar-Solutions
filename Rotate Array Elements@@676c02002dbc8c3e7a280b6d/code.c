// Your code here...
#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    while(k--)
    {
        int temp=arr[n-1];
        for(i=n-1;i>=n;i--)
        {
            arr[i]=arr[i-1];
        }
        a[0]=temp;

    }
    or(int i=0;i<n;i++)
    {
    printf("%d",arr[i]);
    }
}