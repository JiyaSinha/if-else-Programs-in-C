#include<stdio.h>
int main()
{
    float cp,sp,dif,difp;
    printf("Enter the cost price of the product in rupees:\n");
    scanf("%f",&cp);
    printf("Enter the selling price of the product in rupees:\n");
    scanf("%f",&sp);
    dif=sp-cp;
    difp=(dif*100)/cp;
    if(dif>0)
    {
        printf("profit= Rs %f  profit percentage= %f ",dif,difp);
    }
    else if(dif<0)
    {
        printf("loss= Rs %f  loss percentage= %f ",dif*(-1),difp*(-1));
    }
    else
        printf("neither profit nor loss");
    return 0;
}
