/******************************************************************************
Write a program to sort 10 city names stored in two dimensional arrays, taken from
the user.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{   
    
    char s[10][50];
    char s1[200];
    int i,j;
    printf("Enter 10 city names:\n");
    for(i=0;i<=9;i++)
    {
        fgets(s[i],50,stdin);
    }
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(strcmp(s[i],s[j])>0)
            {
                strcpy(s1,s[j]);
                strcpy(s[j],s[i]);
                strcpy(s[i],s1);
            }
        }
    }
   
    printf("\nafter sorted the city names\n");
    for(i=0;i<=9;i++)
     printf("%s",s[i]);

    return 0;
}
