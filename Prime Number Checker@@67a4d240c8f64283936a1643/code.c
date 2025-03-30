// Your code here...
int isPrime(int num)
{
    if(num<=1)
    {
        return 0;
    }
    int flag=1;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}