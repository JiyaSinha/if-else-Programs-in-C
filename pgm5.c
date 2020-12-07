#include<stdio.h>
int main()
{
    int n;
    printf("Enter the amount in rupees:\n");
    printf("Rs");
    scanf("%d",&n);
    int rp1,rp2,rp5,rp10,rp20,rp50,rp100,rp200,rp500,rp2000;
    int temp=n;
    if(temp!=0)
    {
        rp2000=temp/2000;
        temp=temp%2000;
        printf("number of Rs 2000 notes= %d\n",rp2000);
    }
    if(temp!=0)
    {
        rp500=temp/500;
        temp=temp%500;
        printf("number of Rs 500 notes= %d\n",rp500);
    }

    if(temp!=0)
    {
        rp200=temp/200;
        temp=temp%200;
        printf("number of Rs 200 notes= %d\n",rp200);
    }
    if(temp!=0)
    {
        rp100=temp/100;
        temp=temp%100;
        printf("number of Rs 100 notes= %d\n",rp100);

    }
    if(temp!=0)
    {
        rp50=temp/50;
        temp=temp%50;
        printf("number of Rs 50 notes= %d\n",rp50);
    }
    if(temp!=0)
    {
        rp20=temp/20;
        temp=temp%20;
        printf("number of Rs 20 notes= %d\n",rp20);
    }
    if(temp!=0)
    {
        rp10=temp/10;
        temp=temp%10;
        printf("number of Rs 10 notes= %d\n",rp10);
    }
    if(temp!=0)
    {
        rp5=temp/5;
        temp=temp%5;
        printf("number of Rs 5 notes= %d\n",rp5);
    }
    if(temp!=0)
    {
        rp2=temp/2;
        temp=temp%2;
        printf("number of Rs 2 notes= %d\n",rp2);
    }
    if(temp!=0)
    {
        rp1=temp/1;
        temp=temp%1;
        printf("number of Rs 1 notes= %d\n",rp1);
    }
    int sum=rp1+rp2+rp5+rp10+rp20+rp50+rp100+rp200+rp500+rp200;
    printf("Total no. of notes=%d\n");
    return 0;
}
