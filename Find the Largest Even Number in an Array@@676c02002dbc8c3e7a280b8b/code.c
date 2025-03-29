// Your code here...
#include<stdio.h>
int main()
{
    int n,largest=-1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            if(largest== -1 ||arr[i]>largest)
            {
                largest=arr[i];
            }
        }
    }
    printf("%d",largest);
}