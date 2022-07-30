#include <stdio.h>
int stringlength();
int stringcat();
int stringrev();
int stringcopy();
int stringcmp();
int stringcmpi();
int main()
{
     stringlength();
     stringcat();
     stringrev();
     stringcopy();
     stringcmp();
     stringcmpi();
     return 0;
}
int stringlength()
{
     char str[100]; int i;
     int count=0;
     printf("Enter a string for strlen(): ");
     gets(str);
     for(i=0;str[i]!='\0';i++)
     {
         count+=1;
     }
     printf("Number of characters = %d\n",count);
     return 0;
}
int stringcat()
{
     char str1[50], str2[50];
     printf("Enter two strings for strcat(): \n");
     gets(str1);
     gets(str2);
     printf("%s%s",str1,str2);
     return 0;
}
int stringrev()
{
     char str[100]; int i, j;
     int count=0;
     printf("Enter a string for strrev(): ");
     gets(str);
     for(i=0;str[i]!='\0';i++)
     {
         count+=1;
     }
     printf("Reversed String: \n");
     for(j=count-1;j>=0;j--)
     {
         printf("%c",str[j]);
     }
     printf("\n");
     return 0;
}
int stringcopy()
{
     char str1[50], str2[50]; int i;
     printf("Enter the string for strcpy(): ");
     gets(str1);
     for(i=0;str1[i]!='\0';i++)
     {
          str2[i]=str1[i];
     }
     printf("After copying: %s\n",str2);
     return 0;
}
int stringcmp()
{
     char str1[50], str2[50]; int i;  
     printf("Enter two strings for strcmp(): \n");
     gets(str1);
     gets(str2); 
     i = 0;
     while (str1[i] == str2[i] && str1[i] != '\0')
     {
         i++;
     }
     if (str1[i] > str2[i])
     {
         printf("String 1 is greater than String 2\n");
     }
     else if (str1[i] < str2[i])
     {
         printf("String 1 is less than String 2\n");
     }
     else
     {
         printf("String 1 is equal to String 2\n");
     } 
     return 0;
}
int stringcmpi()
{
     char str1[50], str2[50]; int i;  
     printf("Enter two strings for strcmp(): \n");
     gets(str1);
     gets(str2); 
     i = 0;
     while (str1[i] == str2[i] && str1[i] != '\0')
     {
         i++;
     }
     if (str1[i] > str2[i])
     {
         printf("1\n");
     }
     else if (str1[i] < str2[i])
     {
         printf("-1\n");
     }
     else
     {
         printf("0\n");
     } 
     return 0;     
}  
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
         
     
     
     
     
