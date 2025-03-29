// Your code here...
#include<stdio.h>
int main()
{
    int n,sum=0;;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int num=arr[i];

        
        while(num>0)
        {
            sum+=num%10;
            num=num/10;
        }
        printf("%d ",sum);
    }
}