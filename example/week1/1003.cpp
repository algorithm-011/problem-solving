#include <cstdio>

int memo[100] = {0, };

int fibonacci(int n)
{
    if(n <= 1)
        return n;
    else if(memo[n] != 0)
        return memo[n];
    else
        return memo[n] = fibonacci(n-1) + fibonacci(n-2);
}

int main(void)
{
    int n;
    scanf("%d", &n);;

    memo[0] = 0;
    memo[1] = 1;

    for(int i=0; i<n; i++)
    {
        int val;
        scanf("%d", &val);
        if(val != 0)
            printf("%d %d\n", fibonacci(val-1), fibonacci(val));
        else
            printf("1 0\n");
    }

    return 0;
}
