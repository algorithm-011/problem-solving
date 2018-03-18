#include<cstdio>
#include<algorithm>

int a[500010];

int main(void)
{
  int n,t;
  scanf("%d",&n);
  for(int i=0;i<n;++i) scanf("%d",a+i);
  std::sort(a,a+n);
  scanf("%d",&t);
  while(t--)
    {
      int inp;
      scanf("%d",&inp);

      int h=n-1,l=0,m;
      while(h>=l)
        {
          m = (h+l)/2;
          if(a[m]>inp) h = m-1;
          else if(a[m]<inp) l = m+1;
          else break;
        }
      printf("%d ",a[m]==inp?1:0);
    }
  return 0;
}
