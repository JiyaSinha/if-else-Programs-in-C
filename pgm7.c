#include<stdio.h>
int main()
{
    int a1,a2,a3,sum;
    printf("Enter the three angles of the triangle in degrees:\n");
    scanf("%d%d%d",&a1,&a2,&a3);
    sum=a1+a2+a3;
    if(a1==0||a2==0||a3==0||sum!=180)
        printf("This triangle is not possible.");
    else
        printf("This triangle is possible.");
    return 0;
}
