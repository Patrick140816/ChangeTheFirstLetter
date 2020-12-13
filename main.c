#include<stdio.h>

int  main(void)
{
	int i;
	char str[100];
	gets(str);
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	for (i = 1; str[i] != '\0'; i++){
		if (str[i - 1] == ' ' && str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	int m = 0, n = 0;
	int temp = 0;
	while (str[m] != '\0')
	{
		if (str[m] != ' '){
			temp = 1;
			str[n++] = str[m++];
		}
		else if (temp){
			str[n++] = str[m++];
			temp = 0;
		}
		else m++;
	}
	str[n] = '\0';
	puts(str);
	return 0;
}
