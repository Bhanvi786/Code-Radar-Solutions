// Your code here...
int isPrime(int a,int b)
{
    if(num<=1)
    {
        return 0;
    }
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return 1;
        }
    }
    return 0;
}
void printPrimesInRange(int a,int b)
{
    for(int i=a;i<=b;i++)
    {
        if(isPrime(i))
        {
            printf("%d ",i);
        }
    }
}