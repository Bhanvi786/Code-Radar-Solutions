// Your code here...
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",arr[i]);
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
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]-arr[i]<diff)
        {
            diff=arr[i+1]-arr[i];
            index=i;
        }
    }
    printf("%d %d",arr[index],arr[index+1]);
    return 0;
}