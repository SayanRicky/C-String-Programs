#include<stdio.h>
#include<string.h>
int main()
{
   char str[100][100],str1[100]; int i,j,n;
   printf("Enter number of names :");
   scanf("%d",&n);
   printf("Enter the names:\n");
   for(i=0;i<n;i++)
   {
      scanf("%s",str[i]);
   }
   for(i=0;i<n;i++)
   {
      for(j=i+1;j<n;j++)
      {
         if(strcmp(str[i],str[j])>0)
         {
            strcpy(str1,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],str1);
         }
      }
   }
   printf("Alphabetical of the names are:\n");
   for(i=0;i<n;i++)
   {
      printf("%s\n",str[i]);
   }
   return 0;
}
