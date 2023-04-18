#include <stdio.h>
#include <string.h>
int main ()
{
    //Count number of alphabet , number and SpecialCharacter in given string
    char str1[100];
    printf("Enter string");
    scanf("%s",str1);
    int i, n;
    int count = 0;
    int count2 = 0;
    int count3 = 0;
    int countVowel=0;
    int countConstonant=0;
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]>='a' && str1[i] <='z' || str1[i]>='A' && str1[i] <='Z')
        {
            count ++;
            if(str1[i] == 'a'||str1[i] =='e'||str1[i] =='i'||str1[i] =='o'||str1[i] =='u'||str1[i] =='A'||str1[i] =='E'||
            str1[i] =='I'||str1[i] =='O'||str1[i] =='U')
            {
                countVowel ++;
            }
            else{
                countConstonant++;
            }
        }
        else if (str1[i]>='0' && str1[i]<='9')
        {
            count2++;
        }
        else
        {
            count3 ++;
        }
    }
    printf("Alphabets is %d \n",count);
    printf("Alphabets is %d \n",count3);
    printf("Numbers is %d\n",count2);
    printf("Vowel is %d\n",countVowel);
    printf("Consonants is %d\n",countConstonant);
  }