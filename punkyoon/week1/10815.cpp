#include <cstdio>
#include <set>

using namespace std;

int main(void)
{
    int n, m;
    set<int> st;

    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int val;
        scanf("%d", &val);
        st.insert(val);
    }

    scanf("%d", &m);
    for(int i=0; i<m; i++)
    {
        int val;
        scanf("%d", &val);
        printf("%d ", st.count(val));
    }
    printf("\n");

    return 0;
}
