// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&arr[i]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int a=arr[n-2]*arr[n-1]
    printf("%d",a);
}