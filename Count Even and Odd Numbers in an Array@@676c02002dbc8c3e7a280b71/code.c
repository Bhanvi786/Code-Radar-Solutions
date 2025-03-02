// Your code here...
#include<stdio.h>
int main()
{
    int n,evencount=0,oddcount=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
    if(arr[i]%2==0)  //i%2 checks indcex posn even odd not no at that index
    {
        evencount++;
    }
    else
    {
        oddcount++;
    }
    }
    printf("%d %d",evencount,oddcount);
}