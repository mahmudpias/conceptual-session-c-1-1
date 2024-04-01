#include<stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a, &b);
    int sum = a+b;
    printf("%lld + %lld = %d\n",a,b,sum);
    long long int mul = a*b;
    printf("%lld * %lld = %lld\n",a,b,mul);
    int sub = a-b;
    printf("%lld - %lld = %d\n",a,b,sub);
}