#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter the sides of triangle in units:\n");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1+s2>s3&&s2+s3>s1&&s1+s3>s2)
        printf("This triangle is possible.");
    else
        printf("This triangle is not possible.");
    return 0;
}
