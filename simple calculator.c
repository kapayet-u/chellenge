#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Tow Value :");
    scanf("%d %d",&x,&y);

    int sum = x+y;
    printf("%d + %d = %d\n",x,y, sum);

    int multi = x*y;
    printf("%d * %d = %d\n",x,y , multi);

    int sub = x-y;
    printf("%d - %d = %d\n",x,y, sub);

}

