#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character to be checked:\n");
    scanf("%c",&ch);
    if(isalpha(ch))
    {
        if(isupper(ch))
            printf("%c is an alphabet in uppercase.",ch);
        else if(islower(ch))
            printf("%c is an alphabet in lowercase.",ch);
    }
    else
        printf("%c is not an alphabet.",ch);
    return 0;
}
