/******************************************************************************

 Write a program to read and display a 2D array of strings in C language.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{   int a;
    printf("Enter the number of strings\n");
    scanf("%d",&a);
    
    char s[a][50];
    int i,j;
    printf("Enter %d strings:\n",a);
    for(i=0;i<=a;i++)
    {
        fgets(s[i],50,stdin);
    }
   
    printf("\n2D array of strings\n");
    for(i=0;i<=a;i++)
     printf("%s",s[i]);

    return 0;
}
