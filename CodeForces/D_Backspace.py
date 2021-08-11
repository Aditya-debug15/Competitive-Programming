
def solve():
    first=input()
    second=input()
    ans=False
    while(len(first)>=len(second)):
        if(len(second)==0):
            ans=True
            break
        if(first[-1]==second[-1]):
            first=first[:-1]
            second=second[:-1]
        else:
            first=first[:-2]
    if(ans):
        print("YES")
    else:
        print("NO")
    


t=int(input())
while(t>0):
    t-=1
    solve()
