def ans(s):
    l = [s.count(k) for k in set(s)]
    d = {x: l.count(x) for x in set(l)}
    ld = list(set(d.keys()))
    if len(ld) > 2: return "NO"
    elif len(ld) == 2:
        if 1 in ld and d[1] == 1: return "YES"
        if abs(ld[0]-ld[1]) == 1 and (d[ld[0]]==1 or d[ld[1]]==1): return "YES"
        return "NO"
    return "YES"

print(ans(input().strip()))
