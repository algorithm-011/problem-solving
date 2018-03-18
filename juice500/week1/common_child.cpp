#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int main(void) {
    char s1[5002], s2[5002];
    int dp[2][5001] = {{0,},};
    scanf("%s %s ", &s1[1], &s2[1]);

    for(int i=1; s1[i]; ++i) {
        for(int j=1; s2[j]; ++j) {
            if(s1[i]==s2[j]) dp[i%2][j] = dp[1-i%2][j-1] + 1;
            else dp[i%2][j] = max(dp[1-i%2][j], dp[i%2][j-1]);
        }
    }
    printf("%d\n", dp[strlen(&s1[1])%2][strlen(&s2[1])]);

    return 0;
}

