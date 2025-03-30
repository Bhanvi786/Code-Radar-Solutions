// Your code here...
int findUnsortedSubarray(int arr[], int n)
{
    int left,right;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            left=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]<arr[i-1])
        {
            right=i;
            break;
        }
    }
    int a=(right-left)+1;
    printf("%d",a);
}