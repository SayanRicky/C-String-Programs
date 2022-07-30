#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], c; int i, j, l;
    printf("Enter a string: ");
    gets(str);
    printf("Enter character to be deleted: ");
    scanf("%c",&c);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]==c)
        {
            for(j=i;j<l;j++)
            {
                str[j]=str[j+1];
            }
            l--;
            i--;
        }
    }
    printf("Result = %s\n",str);
    return 0;
}
