// Your code here...
int binarySearch(int arr[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        if(target==arr[i])
        {
            return i;
           
        }
        else if(target!=arr[i])
        {
            return -1;
        }
        
    }
}