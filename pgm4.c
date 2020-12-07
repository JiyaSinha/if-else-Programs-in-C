#include<stdio.h>
int main()
{
    int n;
    printf("Enter the month number:\n");
    scanf("%d",&n);
    int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(n==2)
        printf("the no. of days in month no.%d is 28(when normal year) and 29(when leap year).\n",n);
    else
        printf("the no. of days in month no. %d is %d",n,a[n-1]);
    return 0;
}

