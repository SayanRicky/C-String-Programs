#include <stdio.h>
#include <string.h>
int main()
{
    char str[50]; int i, l, c=0;
    printf("Enter a string: ");
    gets(str);
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
        printf("The string is Palindrome\n");
    }
    else
    {
        printf("The string is NOT Palindrome\n");
    }
    return 0;
}
