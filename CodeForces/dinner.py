import math
import sys
sys.stdin = open("dinner.in", "r")
sys.stdout = open("dinner.out", "w")
def getNcR(n,r):
    p = 1
    k = 1
    if (n - r < r):
        r = n - r
    if (r != 0):
        while (r):
            p *= n
            k *= r
            m = math.gcd(p, k)
            p //= m
            k //= m
            n-=1
            r-=1
    else:
        p = 1
    return p
numbers = [int(n) for n in input().split()]
n=numbers[1]
k=numbers[0]
result=int(0)
for i in range(0,k,1):
    if(i%2):
        result -= (((k-i)**n)*getNcR(k, i))
    else: 
        result += (((k-i)**n)*getNcR(k, i))

print(int(result))