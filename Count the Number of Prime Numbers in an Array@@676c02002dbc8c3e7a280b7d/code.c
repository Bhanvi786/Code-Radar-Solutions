// Your code here...
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=2;j<arr[i];j++)
    {
       if(arr[i]%j!=0)
       {
            sum=sum+1;
       }
    }
    printf("%d",sum);

}