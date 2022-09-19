/******************************************************************************
Suppose we have a list of email addresses, check whether all email addresses have
‘@’ in it. Print the odd email out.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{   
    int a;
    printf("Enter the number of Email addresses\n");
    scanf("%d",&a);
    char s[a][50];
    char s1[50];
    int i,j,count;
    printf("Enter %d mail addresses:\n",a);
    for(i=0;i<a;i++)
    {
        fgets(s[i],50,stdin);
    }
    printf("\nThe odd one email address is:\n");
    
    for(i=0;i<a;i++)
    {   count=0;
        for(j=0;s[i][j];j++)
        {
            if(s[i][j]=='@')
              count++;
        }
        if(count==0)
        {
            printf("%s",s[i]);
        }
    }
   
   

    return 0;
}
