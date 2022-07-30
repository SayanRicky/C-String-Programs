#include <stdio.h>
int main()
{
    char str[50];
    int i=0, sum=0;
    printf("Enter a string: ");
    gets(str);
    while(str[i]!='\0')
    {
         if(str[i]=='0' || str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' || str[i]=='6' || str[i]=='7' || str[i]=='8' || str[i]=='9')
         {
              sum=sum+(str[i] - '0');
         }
         i++;
    }
    printf("Sum of the digits present in the string = %d\n",sum);
    return 0;
}
