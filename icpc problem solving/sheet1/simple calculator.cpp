#include<stdio.h>

int main()
{
   long long int x,y;
    printf("Enter Tow Value :");
    scanf("%lld %lld",&x,&y);

    long long int sum = x+y;
    printf("%lld + %lld = %lld\n",x,y, sum);

    long long int multi = x*y;
    printf("%lld * %lld = %lld\n",x,y , multi);

    long long int sub = x-y;
    printf("%lld - %lld = %lld\n",x,y, sub);

}

