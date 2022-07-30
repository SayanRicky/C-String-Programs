#include <stdio.h>
int main()
{
     char str[50]; int i; char c;
     printf("Enter a string: ");
     gets(str);
     for(i=0;str[i]!='\0';i++)
     {
          c=str[i];
          if((c>=65 && c<90) || (c>=97 && c<122))
          { 
               c=c+2;
          }
          str[i]=c;
     }
     printf("%s\n",str);
     return 0;
}
