#include <stdio.h>
#include <string.h>
 
int main()
{
    char string[25], reverse_string[25] = {'\0'};
    int  i, length = 0, flag = 0;
 
    fflush(stdin);
    printf("Enter a string: \n");
    scanf("%s",string);
     for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    for (i = length - 1; i >= 0; i--)
    {
       reverse_string[length - i - 1] = string[i];
    }
    for (i = 0; i < length; i++)
    {
        if (reverse_string[i] == string[i])
            flag = 1;
        else
            flag = 0;
    }
    if (flag == 1)
        printf("%s is a palindrome \n", string);
    else
        printf("%s is not a palindrome \n", string);
}