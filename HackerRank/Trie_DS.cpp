#include <bits/stdc++.h>
using namespace std;
typedef struct TrieNode TrieNode;
struct TrieNode{
    long long int num_counts;
    TrieNode* nextalpha[26];
};
TrieNode* MakeNode(void)
{
    TrieNode* T;
    T=new TrieNode;
    T->num_counts=0;
    for(int i=0;i<26;i++)
    {
        T->nextalpha[i]=NULL;
    }
    return T;
}
void AddString(TrieNode* T,string element)
{
    TrieNode* move=T;
    for(int i=0;i<element.size();i++)
    {
        int key=element[i]-'a';
        if(move->nextalpha[key]==NULL)
        {
            move->nextalpha[key]=MakeNode();
        }
        move=move->nextalpha[key];
        move->num_counts++;
    }
}

long long int FindString(TrieNode* T,string search)
{
    TrieNode* move=T;
    for(int i=0;i<search.size();i++)
    {
        int key=search[i]-'a';
        if(move->nextalpha[key]==NULL)
        {
            return 0;
        }
        move=move->nextalpha[key];
    }
    return move->num_counts;
}

int main()
{
    TrieNode* T=MakeNode();
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string a;
        string b;
        cin>>a>>b;
        if(a=="add")
        {
            AddString(T,b);
        }
        else{
            cout<<FindString(T,b)<<endl;
        }
    }
}