#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("Enter the no: ");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        sum+=b;
    }
    printf("Sum of digits are:%d",sum);
}
