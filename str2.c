#include <stdio.h>
#include <string.h>
int main ()
{
    //question to find which number have maximum frequency
  char str[100];
  char result;
  char freq[256] ={0};
  printf("Enter string");
  scanf("%s",str);
  int i, max;
  int count = 0;
  max=0;
  
  for(int i=0;str[i]!='\0';i++)
  {
     freq[str[i]]++;
  }
  for(int i=0;str[i]!='\0';i++)
  {
     if(freq[str[i]]>max)
     {
         max =freq[str[i]];
         result =str[i];
     }
  }
  printf("Maximmum frequency character is %c %d times",result,max);
  
}