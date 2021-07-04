#include <bits/stdc++.h>
using namespace std;

int Find(const vector<string> &language, string s)
{
    for (int i = 0; i < language.size(); i++)
        if (language[i] == s)
            return i;
    return -1;
}

int BFS_Cost(const vector<vector<int>> &Graph)
{
    vector<char> pvisited(Graph.size(), 'b');
    int cost = 0;
    pvisited[0] = 'w';
    vector<int> first;
    first.push_back(0);
    int num_visited = 1;
    while (num_visited < Graph.size())
    {
        vector<int> second;
        for (int i = 0; i < first.size(); i++)
        {
            for (int j = 0; j < Graph.size(); j++)
            {
                if (pvisited[j] == 'b' && Graph[first[i]][j] != -1)
                {
                    pvisited[j] = 'w';
                    second.push_back(j);
                    num_visited++;
                }
            }
        }
        if (second.size() == 0 && num_visited < Graph.size()) // dead end
            return -1;

        for (int i = 0; i < second.size(); i++)
        {
            int best_cost = -1;
            for (int j = 0; j < first.size(); j++)
            {
                int cur_cost = Graph[second[i]][first[j]];
                if (cur_cost != -1 && (best_cost == -1 || cur_cost < best_cost))
                    best_cost = cur_cost;
            }
            cost = cost + best_cost;
        }
        first = second;
    }
    return cost;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<string> language(n + 1);
    language[0] = "English";
    for (int i = 1; i < n + 1; i++)
    {
        cin >> language[i];
    }
    vector<vector<int>> Graph(n + 1);
    for (int i = 0; i < Graph.size(); i++)
        Graph[i].resize(n + 1, -1);
    for (int i = 0; i < m; i++)
    {
        string first, second;
        int cost;
        cin >> first >> second >> cost;
        int first_v = Find(language, first);
        int second_v = Find(language, second);
        Graph[first_v][second_v] = cost;
        Graph[second_v][first_v] = cost;
    }

    int result = BFS_Cost(Graph);
    if(result==-1)
        cout<<"Impossible"<<endl;
    else{
        cout<<result<<endl;
    }
    /*
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << Graph[i][j] << " ";
        }
        cout << endl;
    }
    */
}
