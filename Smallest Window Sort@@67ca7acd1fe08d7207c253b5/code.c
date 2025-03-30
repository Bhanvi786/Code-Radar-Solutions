// Your code here...
int findUnsortedSubarray(int arr[], int n)
{
    int left=-1,right=-1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            left=i;
            break;
        }
    }
    for(int i=n-1;i>0;i--)
    {
        if(arr[i]<arr[i-1])
        {
            right=i;
            break;
        }
    }
    if(left==-1 || right==-1)
    {
        printf("0\n")
    }
    int a=(right-left)+1;
    printf("%d",a);
    return a;
}