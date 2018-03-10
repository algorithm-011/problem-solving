# Compare the Triplets

[HackerRank](https://www.hackerrank.com/challenges/compare-the-triplets/problem)

단순한 크기 비교만 하면 되는 문제라서 쉽게 풀 수 있었다.

# 피보나치 함수 - 1003

[Baekjoon](https://www.acmicpc.net/problem/1003)

fibonacci(n)을 수행했을 때 0과 1 각각이 출력되는 수를 구하는 문제이며, DP를 사용하여 풀었다.

처음에는 피보나치 함수에서 0과 1이 반환되는 시점에 대해서 카운트를 했는데 시간이 초과되었다.

그래서 피보나치 연산은 memoization을 사용하여 구현하였고, 혹시나하는 마음에 `cout`과 `cin`을 사용하지 않았다.

실제로 0과 1이 출력되는 것을 계산해보니 `n > 0`일때, 0이 출력되는 횟수는 n-1번째 피보나치 수와 같고, 1이 출력되는 횟수는 n번째 피보나치 수와 같았기 때문에 이를 이용하여 문제를 풀었다.
