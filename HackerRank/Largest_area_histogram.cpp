#include <bits/stdc++.h>

using namespace std;

long largestRectangle(vector<int> h)
{
    long area=0;
    int n=h.size();
    vector<int> left(n);
    vector<int> right(n);
    stack<int> mystack;
    for(int i=0;i<h.size();i++)
    {
        if(mystack.empty())
        {
            left[i]=0;
            mystack.push(i);
        }
        else{
            if(h[mystack.top()] > h[i])
            {
                while((!mystack.empty()) && h[mystack.top()] > h[i])
                {
                    mystack.pop();
                }
                if(mystack.empty())
                {
                    left[i]=0;
                }
                else{
                    left[i]=mystack.top()+1;
                }
                mystack.push(i);
            }
            else if(h[mystack.top()]==h[i]){
                left[i]=mystack.top();
            }
            else{
                left[i]=mystack.top()+1;
                mystack.push(i);
            }
        }
    }
    while(!mystack.empty())
    {
        mystack.pop();
    }
    for(int i=h.size()-1;i>=0;i--)
    {
        if(mystack.empty())
        {
            right[i]=n-1;
            mystack.push(i);
        }
        else{
            if(h[mystack.top()] > h[i])
            {
                while((!mystack.empty()) && h[mystack.top()] > h[i])
                {
                    mystack.pop();
                }
                if(mystack.empty())
                {
                    right[i]=n-1;
                }
                else{
                    right[i]=mystack.top()-1;
                }
                mystack.push(i);
            }
            else if(h[mystack.top()]==h[i]){
                right[i]=mystack.top();
            }
            else{
                right[i]=mystack.top()-1;
                mystack.push(i);
            }
        }
        long temp_area=(right[i]-left[i]+1)*h[i];
        if(temp_area>area)
        {
            area=temp_area;
        }
    }
    return area;
}
int main()
{
    int n;
    cin>>n;
    vector<int> h;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        h.push_back(m);
    }
    long t=largestRectangle(h);
    cout<<t<<endl;
}