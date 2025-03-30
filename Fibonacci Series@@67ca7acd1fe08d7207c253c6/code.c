// Your code here...
int fibonacciSeries(int n)
{
    int x=0,y=1,z=0;
    if(n==1)
    {
        printf("0");
        break;
    }
    else
    printf("%d %d",x,y);
    for(int i=2;i<n;i++)
    {
        z=x+y;
        printf(" %d",z);
        x=y;
        y=z;
    }
}