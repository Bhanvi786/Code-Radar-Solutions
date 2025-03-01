#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int maxfreq=1,currentfreq=1,frequent=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            currentfreq++;
        }
        else
        {
            currentfreq=1;
        }
        if(currentfreq>maxfreq)
        {
            maxfreq=currentfreq;
            frequent=arr[i];
        }
    }
    printf("%d",frequent);
    return 0;
}