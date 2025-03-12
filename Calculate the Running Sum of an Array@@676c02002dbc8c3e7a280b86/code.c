// Your code here...
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        arr[i]+=arr[i-1];
        printf("%d ",arr[i]);
    }
    

}