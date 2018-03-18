#include<stdio.h>
int main(void)
{
	int alp[26] = {0};
	char inp[50] = {0};
	int i = 0, j = 0;
	int odd = 0;
	int str_len = 0;
	char odd_alp = 0;

	scanf("%s",inp);
	for(i=0;inp[i]!='\0';i++)
		str_len++;
	for(i=0;i<str_len;i++)
		alp[inp[i]-'A']++;
	for(i=0;i<26;i++)
		if(alp[i]%2)
		{
			odd++;
			odd_alp=i+'A';
		}
	if(odd>1||(str_len%2==0&&odd==1))
	{
		printf("I'm Sorry Hansoo");
		return 0;
	}
	else
	{
		for(i=0;i<26;i++)
			for(j=0;j<alp[i]/2;j++)
				printf("%c",i+'A');
		if(odd==1)
			printf("%c",odd_alp);
		for(i=25;i>-1;i--)
			for(j=0;j<alp[i]/2;j++)
				printf("%c",i+'A');
	}
	return 0;
}

