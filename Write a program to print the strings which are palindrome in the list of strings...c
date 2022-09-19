/******************************************************************************
Write a program to print the strings which are palindrome in the list of strings.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{   
    int a;
    printf("Enter the number of strings\n");
    scanf("%d",&a);
    char s[a][50];
    int i,j,k;
    printf("Enter %d strings:\n",a);
    for(i=0;i<=a;i++)
    {
        fgets(s[i],50,stdin);
    }
    printf("\nThe palindrome strings are:"); 
      
    for(i=0;i<=a;i++)
    {   
       k=strlen(s[i]);
       k=k-1;
       
        for(j=0;j<=(k/2);j++)
        {
           if(s[i][j]!=s[i][k-j-1])
               break;
        }
        if(j==(k+1)/2)
        {
            printf("%s",s[i]);
        }
    }
}