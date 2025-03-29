// Your code here...
#include<stdio.h>
int main()
{
    int n,remainder,reverse,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int num=arr[i];
        reverse=0;
        while(num>0)
        {
            remainder=num%10;
            reverse=reverse*10+remainder;
            num=num/10;
        }
        if(reverse==arr[i])
        {
            count++;
        }
    }
    printf("%d",count);
}