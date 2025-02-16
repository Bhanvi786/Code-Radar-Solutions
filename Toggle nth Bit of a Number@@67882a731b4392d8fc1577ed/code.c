// Your code here...
int main()
{
    int num=0,n;
    scanf("%d %d",&num,&n);
    num=num^(1<<n);
    printf("%d",num);
    return 0;
}