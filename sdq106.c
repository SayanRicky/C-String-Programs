#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], c, d; int i, l, count=0;
    printf("Enter a string: ");
    gets(str);
    printf("Enter character to be removed: ");
    scanf("%c",&d);
    printf("Enter character to be replaced: ");
    scanf(" %c",&c);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]==d)
        {
            str[i]=c;
        }
    }
    printf("Result = %s\n",str);
    return 0;
}
