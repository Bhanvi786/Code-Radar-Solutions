// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],freq[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        if(freq[i]=-1)
        {
            int count=1;
        }
        for(int j=i+1;j<n;j++)
        {
            if(int[i]==int[j])
            {
                count++;
            }
        }
    }
    freq[i]=count;
    for(int i=0;i<n;i++)
    {
        printf("%d ",freq[i]);
    }
}