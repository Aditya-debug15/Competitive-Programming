#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void print_string(int n)
{
    vector<string> graycode;
    graycode.push_back("0");
    graycode.push_back("1");
    for (int j = 2; j < 1 << n; j = j << 1)
    {
        for (int i = j - 1; i >= 0; i--)
        {
            graycode.push_back(graycode[i]);
        }
        for (int i = 0; i < j; i++)
        {
            graycode[i] = "0" + graycode[i];
        }
        for (int i = j; i < 2 * j; i++)
        {
            graycode[i] = "1" + graycode[i];
        }
    }
    for (int i = 0; i < (1 << n); i++)
    {
        cout << graycode[i] << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print_string(n);
}