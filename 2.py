t = int(input())
for _ in range(t):
    n, k = map(int,input().split())
    abas = list(str(n))
    abas1 = set(abas)
    if len(abas1) == k:
        print(n)
    else:
        hi = 0
        if k == 1:
            for i in range(len(abas)-1):
                if abas[i] < abas[i+1]:
                    hi = 1
                    break
            if hi == 1:
                for i in range(len(abas)):
                    abas[i] = abas[0]
            print(*abas,sep = '')
        else:
            maxi = max(a[0],a[1])
            if a[2] > maxi:
                if a[2]!=9:
                    for i in range(2,len(abas)):
                        a[i] = maxi + 1
                else:
                    chu = a[1] + 1
                    for i in range(1,len(abas)):
                        abas[i] = chu
            else:
                if a[2] > a[1] and a[2] < a[0]:
                    
                elif a[2] < a[1] and a[2] < a[0]:

                elif a[2] < a[1] and a[2] > a[0]:
                    
