// Your code here...
int findOccurrence(int arr[],unt n,int target,int mode)
{
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
    if(mode=='F')
    {
        for(int i=0;i<n;i++)
        {
            if(target==arr[i])
            {
                return i;
                break;
            }
        }
    }
    if(mode='L')
    {
        for(int i=n-1;i>=0;i--)
        {
            if(target==arr[i])
            {
                return i;
                break;
            }
        }
    }
    return -1;
}