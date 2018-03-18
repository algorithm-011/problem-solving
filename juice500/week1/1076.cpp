#include<stdio.h>
#include<string.h>

char* dat[10] = {"black","brown","red","orange","yellow","green","blue","violet","grey","white"};
int find(char str[])
{
	int i;
	for(i=0;i<10;++i) if(strcmp(dat[i],str)==0) break;
	return i;
}
void mul(int i)
{
	while(i--) putchar('0');
}
int main(void)
{
	char str[10];
	int ans = 0;
	scanf("%s",str);
	ans += find(str) * 10;
	scanf("%s",str);
	ans += find(str);
	printf("%d",ans);
	scanf("%s",str);
	if(ans) mul(find(str));

	return 0;
}

