// Your code here...
#include<stdio.h>
int main()
{
    int n,count=0,i;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<n;i++)
    {
        int num=arr[i]
        flag=1;
        for(int j=2;j<=num;j++)
        {
            if(num%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            count++
        }
    }
    printf("%d",count);
    return 0;
}