// Running median problem on Hacker rank using Heaps
// I would require 2 heaps one min heap and 1 max heap 
// other problem is k-th largest in O(k*log(k))
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    priority_queue<int,vector<int>> max_pq;
    priority_queue<int,vector<int>,greater<int>> min_pq;
    for(int i=0;i<n;i++)
    {
        int alpha;
        cin>>alpha;
        if(i%2==0)
        {
            if(min_pq.empty())
            {
                max_pq.push(alpha);
            }
            else if(alpha>min_pq.top())
            {
                int beta=min_pq.top();
                min_pq.pop();
                min_pq.push(alpha);
                max_pq.push(beta);
            }   
            else{
                max_pq.push(alpha);
            }      
        }
        else{
            if(alpha<max_pq.top())
            {
                int beta=max_pq.top();
                max_pq.pop();
                max_pq.push(alpha);
                min_pq.push(beta);
            }   
            else{
                min_pq.push(alpha);
            }      
        }
        if(i%2==0)
        {
            double median=max_pq.top();
            printf("%.1f\n",median);
        }
        else{
            double median=max_pq.top()+min_pq.top();
            median/=2;
            printf("%.1f\n",median);
        }
    }
}