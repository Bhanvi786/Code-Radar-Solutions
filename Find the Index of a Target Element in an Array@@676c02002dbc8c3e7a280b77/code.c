// Your code here...
#include<stdio.h>
int main()
{
    int n,i,m,index=-1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            index=i;
            break;
        }
    }
    printf("%d",i);

}