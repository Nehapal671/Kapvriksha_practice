#include <stdio.h>
int main()
{
	// two Strings to be concatenated
	char str1[100];
    char str2[100];
    printf("\nEnter string one %s",str1);
    scanf("%s",str1);
    printf("\nEnter string two %s",str2);
    scanf("%s",str2);
	char str3[100];
	int i = 0, j = 0;
	while (str1[i] != '\0') {
		str3[j] = str1[i];
		i++;
		j++;
	}
	i = 0;
	while (str2[i] != '\0') {
		str3[j] = str2[i];
		i++;
		j++;
	}
	str3[j] = '\0';
	printf("\nConcatenated string: %s \n", str3);
	return 0;
}
