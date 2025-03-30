// Your code here...
int isPrime(int num)
{
    int flag=1;
    for(int i=2;i<num;i++)
    {
        if(num%2==0)
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