#include<cstdio>
#include<algorithm>
struct person {
    int idx;
    int age;
    char name[102];
};
 
person dat[100000];

struct less_key {
    bool operator() (const person& p1, const person& p2){
        return p1.age!=p2.age?(p1.age<p2.age):(p1.idx<p2.idx);
    }
};

int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d %[^\n]",&dat[i].age,dat[i].name);
        dat[i].idx = i;
    }
    std::sort(dat,dat+n,less_key());
    for(int i=0;i<n;++i) printf("%d %s\n",dat[i].age,dat[i].name);
    return 0;
}
