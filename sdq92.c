#include <stdio.h>
int main()
{
    char str[50];
    int i=0, v=0, c=0, s=0, sc=0;
    printf("Enter a string: ");
    gets(str);
    while(str[i]!='\0')
    {
         if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
         {
             v++;
         }
         else if(str[i]=='b'|| str[i]=='c' || str[i]=='d' || str[i]=='f' || str[i]=='g' || str[i]=='h' || str[i]=='j' || str[i]=='k' || str[i]=='l' || str[i]=='m' || str[i]=='n' ||      str[i]=='p' || str[i]=='q' || str[i]=='r' || str[i]=='s' || str[i]=='t' || str[i]=='v' || str[i]=='w' || str[i]=='x' || str[i]=='y' || str[i]=='z' || str[i]=='B'|| str[i]=='C' || str[i]=='D' || str[i]=='F' || str[i]=='G' || str[i]=='H' || str[i]=='J' || str[i]=='K' || str[i]=='L' || str[i]=='M' || str[i]=='N' ||      str[i]=='P' || str[i]=='Q' || str[i]=='R' || str[i]=='S' || str[i]=='T' || str[i]=='V' || str[i]=='W' || str[i]=='X' || str[i]=='Y' || str[i]=='Z')
         {
             c++;
         }
         else if(str[i]==' ')
         {
             s++;
         }
         else
         {
             sc++;
         }
         i++;
    }
    printf("Number of Vowels = %d\nNumber of Consonants = %d\nNumber of Spaces = %d\nNumber of Special Characters = %d\n",v,c,s,sc);
    return 0;
}
