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
    int maxright=arr[n-1];
    printf("%d",maxright);
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>maxright)
        {
            maxright=arr[i];
            printf("%d ",maxright);
        }
    }
    return 0;
}