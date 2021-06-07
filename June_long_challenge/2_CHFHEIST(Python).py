#FULL SOLUTION
# 2. CHFHEIST


t=int(input())
for i in range(t):
    D,d,P,Q=input().split()
    D,d,P,Q = [int(D), int(d),int(P), int(Q)]
    tot = 0
    rem = 0
    n = 0
    if D % d == 0:
        n = int(D / d)
        rem = 0
    else:
        n = int(D / d)
        rem = D - n * d
    tot = P * D + (Q * d) * (int)(((n - 1) * n)/2) + rem * (n * Q)
    print(tot)