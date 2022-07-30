#include <stdio.h>
#include <string.h>
int main()
{
    char str[50]; int i, n;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
        {
            n=i;
            break;
        }
    }
    for(i=n;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%c",str[i]);
    }
    printf("ay");
    printf("\n");
    return 0;
}    
