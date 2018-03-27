#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int median_x_2(vector<int> &v) {
    if(v.size()%2) return v[v.size()/2] * 2;
    else return v[v.size()/2] + v[v.size()/2-1];
}

int main(void) {
    int n, d, ans = 0;
    int dat[200002];
    vector<int> v;

    scanf("%d %d", &n, &d);
    for(int i=0; i<n; ++i) {
        scanf("%d", &dat[i]);
        if(i<d) v.push_back(dat[i]);
    }
    sort(v.begin(), v.end());

    for(int i=d; i<n; ++i) {
        if(dat[i] >= median_x_2(v)) ++ans;
        v.erase(lower_bound(v.begin(), v.end(), dat[i-d]));
        v.insert(upper_bound(v.begin(), v.end(), dat[i]), dat[i]);
    }
    printf("%d\n", ans);

    return 0;
}
