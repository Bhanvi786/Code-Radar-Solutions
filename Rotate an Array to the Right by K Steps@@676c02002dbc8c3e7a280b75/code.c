// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    while(k--)
    {
        int temp=arr[n-1];
        for(int i=n-1;i>=1;i++)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
