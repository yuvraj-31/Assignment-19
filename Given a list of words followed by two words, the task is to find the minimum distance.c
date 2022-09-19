/******************************************************************************
Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
word1 = “the”, word2 = “fox”, OUTPUT : 1 )

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{  
    int a;
    printf("Enter the number of strings\n");
    scanf("%d",&a);
    char s[a][50];
    int i;
    for(i=0;i<=a;i++)
    {
        fgets(s[i],50,stdin);
    }
    char s1[50];
    char s2[50];
    printf("Enter the word 1st:\n");
    fgets(s1,50,stdin);
    printf("Enter the word 2nd:\n");
    fgets(s2,50,stdin);
    int temp=0,temp1=-1,count1=0,count2=0;
    for(i=0;i<a;i++)
    {   
        temp++;
        if(strcmp(s[i],s1)==0)
         {
            count1=temp;
        
         }
         
         if(strcmp(s[i],s2)==0)
         {
             count2=temp;
         }
         
         if(count1>0 && count2>0)
        {
            temp1++;
        }
         
    }
    int temp2 = count1>count2?(count1-count2-1):(count2-count1-1);
     if((count1>count2)==1)
     {
         if((count2+temp1-1)<temp2)
            printf("The minimum distance between these two words is %d",count2+temp1-1);
        else
          printf("The minimum distance between these two words is %d",temp2);
     }
     else
         if((count1+temp1-1)<temp2)
            printf("The minimum distance between these two words is %d",count1+temp1-1);
        else
          printf("The minimum distance between these two words is %d",temp2);
     
    

    return 0;
}
