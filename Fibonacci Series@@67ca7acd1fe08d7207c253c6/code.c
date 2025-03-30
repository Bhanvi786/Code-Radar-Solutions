// Your code here...
int fibonacciSeries(int n)
{
    int x=0,y=1,z=0;
    while(z<=n)
    {
        printf("%d ",z);
        x=y;
        y=z;
        z=x+y;
    }
}