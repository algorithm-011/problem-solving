n = int(input())
arr = [int(x) for x in input().split()]

def dist(now, target):
    now = list(now)
    loc = {x:i for i,x in enumerate(now)}
    ret = 0
    for i,t in enumerate(target):
        if now[i] != t:
            j = loc[t]
            loc[t], loc[now[i]] = loc[now[i]], loc[t]
            now[i], now[j] = now[j], now[i]
            ret += 1
    return ret

print(min(dist(arr, sorted(arr)), dist(arr, sorted(arr)[::-1])))
