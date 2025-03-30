// Your code here...
int binarySearch(int arr[],int n,int target)
{
    if(target>n)
    {
        return -1;
    }
    for(int i=0;i<n;i++)
    {
        if(target==arr[i])
        {
            return i;
        }
    }
}