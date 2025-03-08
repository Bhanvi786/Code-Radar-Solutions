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
        int right=-1;
        for(int i=n-1;i>=0;n--)
        {
            int temp=arr[i];
            arr[i]=right;
            if(temp>right)
            {
                right=temp;
            }
        }
        for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

    }
