#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count_zero = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                count_zero++;
            }
        }
        if (count_zero == 1)
        {
            cout << "BOB" << endl;
        }
        else
        {
            count_zero=count_zero%2;
            if(count_zero==0)
                cout<<"BOB"<<endl;
            else
                cout<<"ALICE"<<endl;
        }
    }
}