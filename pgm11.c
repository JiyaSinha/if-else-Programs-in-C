#include<stdio.h>
int main()
{
    float n1,n2,n3,n4,n5;
    printf("Enter the marks out of 100:\n");
    printf("Physics:\n");
    scanf("%f",&n1);
    printf("Chemistry:\n");
    scanf("%f",&n2);
    printf("Biology:\n");
    scanf("%f",&n3);
    printf("Mathematics:\n");
    scanf("%f",&n4);
    printf("Computer:\n");
    scanf("%f",&n5);
    float per=(n1+n2+n3+n4+n5)/5;
    printf("Percentage of 5 subjects: %f\n",per);
    char g;
    if(per>=90)
        g='A';
    else if(per>=80)
        g='B';
    else if(per>=70)
        g='C';
    else if(per>=60)
        g='D';
    else if(per>=40)
        g='E';
    else if(per<40)
        g='F';
    printf("Grade of the student: %c\n",g);
    return 0;
}
