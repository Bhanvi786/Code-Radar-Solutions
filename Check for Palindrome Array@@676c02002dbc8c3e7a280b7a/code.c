// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],int rev[n];
    for( int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int isreverse=1;
    for( int i=0;i<n;i++)
    {
        rev[i]=arr[n-1-i];
    }
    for( int i=0;i<n;i++)
    {
        if(arr[i]!=rev[i])
        {
            isreverse=0;
            break;
        }
    }
    if(isreverse)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}