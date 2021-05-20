#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'arrayManipulation' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */
long arrayManipulation(int n, vector<vector<int>> queries) {
    long int *A=new long int[n+1]();
    long output=0;
    int m=queries.size();
    for(int i=0;i<m;i++){
    //  cout<<queries[i][0]<<" "<<queries[i][1]<<" "<<queries[i][2]<<endl;
        A[queries[i][0]]+=queries[i][2];
        int q= queries[i][1];
        if((q+1)<=n)
        {
            A[q]-=queries[i][2];
        }
    }
    for(int i=1;i<=n;i++)
    {
        A[i]=A[i-1]+A[i];
        if(A[i]>output)
        {
            output=A[i];
        }
    }
    return output;
}

int main()
{
    int n,m;
    cin>>n>>m;
    long int *A=new long int[n+1]();
    long output=0;
    for(int i=0;i<m;i++){
    //  cout<<queries[i][0]<<" "<<queries[i][1]<<" "<<queries[i][2]<<endl;
        int p,q;
        long int k;
        cin>>p>>q>>k;
        A[p]+=k;
        if((q+1)<=n)
        {
            A[q]-=k;
        }
    }
    for(int i=1;i<=n;i++)
    {
        A[i]=A[i-1]+A[i];
        if(A[i]>output)
        {
            output=A[i];
        }
    }
    cout<<output<<endl;
}