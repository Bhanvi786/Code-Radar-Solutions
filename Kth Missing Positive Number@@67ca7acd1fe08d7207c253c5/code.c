// Your code here...
int findKthMissing(int arr[],int n,int k)
{
    int small=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==small)
        {
            small++;
        }
    }
    return small;
}