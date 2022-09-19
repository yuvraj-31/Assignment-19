/******************************************************************************
From the list of IP addresses, check whether all ip addresses are valid.
*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{   
    int a;
    printf("Enter the number of IP adresses\n");
    scanf("%d",&a);
    char s[a][50];
    int i,j,sum,k,temp=-1;
    printf("Enter %d ip addresses:\n",a);
    for(i=0;i<=a;i++)
    {
        fgets(s[i],50,stdin);
    }
    
      printf("The number of invalid ip adreesses are:\n");
    for(i=0;i<=a;i++)
    {   
       for(j=0;j<4;j++)
       {    sum=0;
           int count=0;
           for(k=temp+1;s[i][k]!='\0';k++)
           {   
               if(s[i][k]=='.')
                 break;
               sum=sum*10+(s[i][k]-48);
               if(k==0 && s[i][k]=='0')
                  count++;
               temp++;
           }
             if((sum<0 || sum>255) || (count>=1 && sum>0))
            {  printf("%s",s[i]);
               break; }
               temp++;
       }
       
    }
}
