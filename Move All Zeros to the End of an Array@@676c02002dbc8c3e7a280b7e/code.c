// Your code here...
#include<stdio.h>
int n;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int j=0;
for(i=0;i<n;i++)
{
    if (arr[i]!=0);
    {
        if(i!=j)
        {
            int trmp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        j++;
    }
    for(i=0;i<n;i++)
{
    pruntf("%d",&arr[i]);
}

}

