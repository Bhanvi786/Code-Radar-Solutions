// Your code here...
#include<stdio.h>
int main()
{
    int n,count=1,i,j;
    scanf("%d",&n);
    int arr[n],freq[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        if(freq[i]==-1)
        {
            count=1;
        }
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                
            }
        }
        freq[i]=count;
    }
   
    for(int i=0;i<n;i++)
    {
        printf("%d %d\n",arr[i],freq[i]);
    }
}