/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int factorial(int n);
int main()
{   
    int a;
    printf("Enter the number of usernames:\n");
    scanf("%d",&a);
    char s[a][50];
    char s1[50];
    int i,n;
    printf("Enter %d usernames:\n",a);
    for(i=0;i<=a;i++)
    {
        fgets(s[i],50,stdin);
    }
    printf("Enter a username\n");
    fgets(s1,50,stdin);
    
    //   printf("The number of invalid ip adreesses are:\n");
    for(i=0;i<=a;i++)
    {   
      if(strcmp(s[i],s1)==0)
      {
          printf("You entered the correct username so you are allowed to calculate the factorial\n please enter a number:\n");
          scanf("%d",&n);
         int fact=factorial(n);
          printf("The factorial of the given number is %d",fact);
          break;
      }
      if(i==a)
        {
            printf("You not entered the correct username so you are not allowed to calculate the factorial");
            break;
        }
              
     }
}
     int factorial(int n)
     {
         int fact;
         if(n==0)
           return 1;
         fact=n*factorial(n-1);
         
     }
