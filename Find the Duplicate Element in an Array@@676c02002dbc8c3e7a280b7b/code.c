// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int duplicate=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            printf("%d",arr[i]);
            duplicate=1;
            while(i>0 && arr[i]==arr[i+1]){
                i++;
            }
        }
    }
}