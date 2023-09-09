#include<stdio.h>
int main()
{
    int n,rem;
    int sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n/=10;
    }
    printf("The reverse is %d",sum);
    return 0;
}