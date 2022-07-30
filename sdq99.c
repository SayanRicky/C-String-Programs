#include <stdio.h>
int main()
{
    char str[100]; int i=0, count=0;
    printf("Enter a string: ");
    gets(str);
    if(str[0]=='S' || str[0]=='s')
    {
        count++;
    }
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            if(str[i+1]=='S' || str[i+1]=='s')
            {
                count++;
            }
        }
        i++;
    }
    printf("Number of words starting with S = %d\n",count);
    return 0;
}
