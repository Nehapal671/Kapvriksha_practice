#include<stdio.h>
int main()
{
    //find weather number is hexadecimal of not
    char str[100],ch;
    int i,max,t;
    printf("Enter char");
    scanf("%c",&ch);
    if((ch >='0' &&ch<='9') ||(ch >='a' &&ch<='f')||(ch >='A' &&ch<='F'))
    {
        printf("hexadecimal");
    }
    else
    {
    printf("not");
    }
  
    
}