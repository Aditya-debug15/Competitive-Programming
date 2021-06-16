#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

string A;
int main()
{
    char extra='\0';
    cin>> A;
    int B[26]={0};
    for(int i=0;i<A.length();i++)
    {
        B[A[i]-'A']++;
    }
    int n=0;
    for(int i=0;i<26;i++)
    {
        if(B[i]%2==1)
            n++;
    }
    if(n>=2)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        if(n==1)
        {
            for(int i=0;i<26;i++)
            {
                if(B[i]%2==0)
                {
                    char out='A'+i;
                    B[i]=B[i]/2;
                    cout<<std::string(B[i],out);
                }
                else{
                    extra='A'+i;
                    char out='A'+i;
                    B[i]=B[i]/2;
                    cout<<std::string(B[i],out);
                }
            }
            cout<<extra;
            for(int i=25;i>=0;i--)
            {
                char out='A'+i;
                cout<<std::string(B[i],out);
            }
        }
        else{
            for(int i=0;i<26;i++)
            {
                char out='A'+i;
                B[i]=B[i]/2;
                cout<<std::string(B[i],out);
            }
            for(int i=25;i>=0;i--)
            {
                char out='A'+i;
                cout<<std::string(B[i],out);
            }
        }
    }
}