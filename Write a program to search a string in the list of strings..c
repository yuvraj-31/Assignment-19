/******************************************************************************
Write a program to search a string in the list of strings.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{   
    int a;
    printf("Enter the number of strings\n");
    scanf("%d",&a);
    char s[a][50];
    char s1[50];
    int i,j;
    printf("Enter %d strings:\n",a);
    for(i=0;i<=a;i++)
    {
        fgets(s[i],50,stdin);
    }
    printf("Enter a string\n");
    fgets(s1,50,stdin);
    for(i=0;i<=a;i++)
    {
        if(strcmp(s1,s[i])==0)
        {
            printf("yes, the given string is present in the list");
            break;
        }
    }
    if(i==9)
    {
        printf("No, the given string is not present in the list");
    }
   

    return 0;
}
