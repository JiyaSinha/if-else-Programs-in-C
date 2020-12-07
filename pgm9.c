#include<stdio.h>
int main()
{
    int a1,a2,a3,sum;
    rpt:printf("Enter the three angles of the triangle in degrees:\n");
    scanf("%d%d%d",&a1,&a2,&a3);
    sum=a1+a2+a3;
    if(a1==0||a2==0||a3==0||sum!=180)
       {
         printf("This triangle is not possible.\n");
         printf("please enter the values again:\n");
         goto rpt;
       }
    else
        printf("This triangle is possible.\n");
    if(a1==a2||a2==a3||a1==a3)
    {
        if(a1==a2&&a2==a3)
            printf("Equilateral Triangle");
        else
            printf("Isosceles Triangle");
    }
    else
        printf("Scalene Triangle");
    return 0;
}

