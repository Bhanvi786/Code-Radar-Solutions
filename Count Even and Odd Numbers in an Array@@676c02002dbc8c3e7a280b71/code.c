// Your code here...
#include<stdio.h>
int main()
{
    int n,evencount=0,oddcount=0;
    scnaf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(int i%2==0)
    {
        evencount++;
    }
    else
    {
        oddcount++;
    }
    printf("%d %d",evencount,oddcount);
}