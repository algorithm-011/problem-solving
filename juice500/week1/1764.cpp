#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
char inp[500000][21];
int is_found[500000];
char tmp[21];
int i,m,n,tot;
char* ptr;
 
int main(void)
{
 
    scanf("%d%d",&n,&m);
    for(i=0;i<n;++i) scanf("%s",inp[i]);
    qsort(inp,n,21,strcmp);
    for(i=0;i<m;++i)
    {
        scanf("%s",tmp);
        ptr = bsearch(tmp,inp,n,21,strcmp);
		if(ptr)
		{
			is_found[(ptr-(char*)inp)/21] = 1;
			tot++;
		}
    }
    printf("%d\n",tot);
    for(i=0;i<n;++i) if(is_found[i]) puts(inp[i]);
	return 0;
}

