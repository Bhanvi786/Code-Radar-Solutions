// Your code here...
int main()
{
    int n,arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    scanf("%d",arr[n]);
    }
    if(n==1)
    {
        printf("-1");
    }
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
    int diff=arr[1]-arr[0];
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(arr[n+1]-arr[n]<diff)
        {
            diff=arr[n+1]-arr[n];
            index=i;
        }
    }
    printf("%d %d",arr[n],arr[n+1]);
    return 0;
}