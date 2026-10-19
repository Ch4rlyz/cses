n = int(input())
complete = list(range(1,n+1))
incomplete = set([int(x) for x in input().split()])
for x in range(len(complete)):
    if complete[x] not in incomplete:
        print(complete[x])
        break
