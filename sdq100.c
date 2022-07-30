#include <stdio.h>
#include <string.h>
int palin(char []);
int main()
{
    char str[50];
    printf("Enter a string: ");
    gets(str);
    if(palin(str)==1)
    {
        printf("The string is palindrome\n");
    }
    else
    {
        printf("The string is not palindrome\n");
    }
    return 0;
}
int palin(char str[])
{
    int i, l, c=0;
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]!=str[l-i-1])
        {
            c=1;
            break;
        }
    }
    if(c==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
