// Your code here...
#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=2;i<n;i++)
    {
       if(n%i!=0)
       {
            sum=sum+1;
       }
    }
    printf("%d",sum);

}