#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(const void* s1, const void* s2)
{
  if(strlen(*(char**)s1)==strlen(*(char**)s2)) return strcmp(*(char**)s1,*(char**)s2);
  return (strlen(*(char**)s1)>strlen(*(char**)s2))*2-1;
}

int main(void) {
  char** dict;
  char tmp[51];
  int dict_len = 0;
  int n = 0;

  scanf("%d", &dict_len);
  dict = (char**) malloc(dict_len*sizeof(char*));
  for (n = 0; n<dict_len; n++)
    dict[n] = (char*) malloc(51);
  for (n = 0; n<dict_len; n++)
    scanf("%s",dict[n]);
  qsort(dict,dict_len,sizeof(char*),cmp);
  
  printf("%s\n",dict[0]);
  for (n = 1; n<dict_len; n++){
    if(strcmp(dict[n-1],dict[n])!=0)
      printf("%s\n",dict[n]);
  }
  return 0;
}

