from collections import defaultdict

def solve(s):
    pairs = defaultdict(int)
    for window in range(1, len(s)):
        for i in range(len(s)-window+1):
            pairs[tuple(sorted(s[i:i+window]))] += 1
    return sum([(v*(v-1)//2) for v in pairs.values()])

testcases = int(input())
for _ in range(testcases):
    print(solve(input().strip()))
