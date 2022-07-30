#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], c; int i, l, count=0;
    printf("Enter a string: ");
    gets(str);
    printf("Enter character to be searched: ");
    scanf("%c",&c);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]==c)
        {
            count++;
        }
    }
    printf("Number of mentioned characters present in the string are = %d\n",count);
    return 0;
}
