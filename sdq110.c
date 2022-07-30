#include <stdio.h>
#include <string.h>
int main()
{
   char str[100]; int i, l;
   int f[20];
   printf("Enter a string: ");
   gets(str);
   l=strlen(str);
   for(i=0;i<20;i++)
   {
      f[i]=0;
   }
   for(i=0;i<l;i++)
   {
      if(str[i]>='a' && str[i]<='z')
      {
         f[str[i] - 97]++;
      }
      else if(str[i]>='A' && str[i]<='Z')
      {
         f[str[i] - 65]++;
      }
   }
   printf("Frequency of each character in the string: \n");
   for(i=0;i<20;i++)
   {
      if(f[i]!= 0)
      {
         printf("'%c' = %d\n",(i + 97),f[i]);
      }
   }
   return 0;
}
