i=int(input())
l=set()
for t in range(i):l.add(input())
for t in sorted(l,key=lambda a:(len(a),a)):print(t)
