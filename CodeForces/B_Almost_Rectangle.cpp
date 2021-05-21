#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    char Rec[500][500];
    int x1=-1,x2,y1=-1,y2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>Rec[i][j];
            if(Rec[i][j]=='*')
            {
                if(x1==-1)
                {
                    x1=i;
                    y1=j;
                }
                else{
                    x2=i;
                    y2=j;
                }
            }
        }
    }
    // In same row
    if(x1==x2)
    {
        if(x1!=0)
        {
            Rec[0][y1]='*';
            Rec[0][y2]='*';
        }
        else{
            Rec[x1+1][y1]='*';
            Rec[x2+1][y2]='*';
        }
    }
    // same column
    else if(y1==y2)
    {
        if(y1!=0)
        {
            Rec[x1][0]='*';
            Rec[x2][0]='*';
        }
        else{
            Rec[x1][y1+1]='*';
            Rec[x2][y2+1]='*';
        }
    }
    else{
        Rec[x1][y2]='*';
        Rec[x2][y1]='*';
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<Rec[i][j];
        }
        cout<<"\n";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}