// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);}
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]!=arr[n-1])
        {
             int max1=arr[n-2]*arr[n-1];
        }
    }
   
    int max2=arr[0]*arr[1];
    if(int max1> int max2)
    {
    printf("%d",max1);
    }
    else
    {
        printf("%d",max2);
    }
}