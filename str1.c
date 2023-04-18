#include<stdio.h>
int main(){
    //sum all number comes under string
    char str[100];
    printf("Enter String");
    scanf("%s",str);
    int sum=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='0'&& str[i]<='9'){
            sum+=(str[i]-'0');
        }
    }
    printf("Sum is %d",sum);
    return 0;
}