// Your code here...
#include<stdio.h>
int main()
{
    int n,median;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    if(n%2==1)
    {
        median=arr[n/2];
    }
    else
    {
        median=(arr[n/2-1]+arr[n/2])/2;
    }
    printf("%d",median);
}
