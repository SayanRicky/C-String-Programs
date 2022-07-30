#include <stdio.h>
int main()
{
    char str[50], a, c; int i=0;
    printf("Enter a string: ");
    gets(str);
    printf("%c. ",str[0]);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            a=str[i+1];
            printf("%c. ",a);
        }
        i++;
    }
    printf("\n");
    return 0;
}
