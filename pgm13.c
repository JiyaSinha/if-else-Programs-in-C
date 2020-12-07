#include<stdio.h>
int main()
{
    float unit,bill=0;
    printf("Enter the total units of electricity consumed:\n");
    scanf("%f",&unit);
    float temp=unit;
    if(temp<=50)
        bill=0.5*temp;
    else if(temp<=150)
        bill=(0.5*50)+(0.75*(temp-50));
    else if(temp<=250)
        bill=(0.5*50)+(0.75*100)+(1.2*(temp-150));
    else if(temp>250)
        bill=(0.5*50)+(0.75*100)+(1.2*100)+(1.5*(temp-250));
    bill*=1.2;
    printf("Electricity Bill= Rs %f",bill);
    return 0;
}
