#include <stdio.h>
int main()
{
     char str[50]; int i, sum=0;
     printf("Enter a string: ");
     gets(str);
     for(i=0;str[i]!='\0';i++)
     {
         sum=sum+(str[i] - 0);
     }
     printf("Sum of ASCII of characters = %d\n",sum);
     return 0;
}
