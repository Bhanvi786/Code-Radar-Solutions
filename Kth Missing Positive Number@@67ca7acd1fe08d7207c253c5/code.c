// Your code here...
int findKthMissing(int arr[],int n,int k)
{
    small=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==small)
        {
            small++;
        }
    }
    return small;
}