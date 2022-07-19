// https://www.acmicpc.net/problem/11724

// Adjacency List
// Connected Component , DFS

#include <iostream>
#include <vector>

using namespace std;

void addEdge(vector<int> adj[], int s, int d)
{
    adj[s].push_back(d);
    adj[d].push_back(s);
}

void printGraph(vector<int> adj[], int V)
{
    for (int d = 1; d <= V; ++d)
    {
        cout << "\n Vertex "
             << d << ":";
        for (auto x : adj[d])
            cout << "-> " << x;
        printf("\n");
    }
}

void dfs(vector<int> adj[], bool visited[], int x)
{
    visited[x] = true;
    for(int i =0; i < adj[x].size();i++)
    {
        if(!visited[adj[x][i]])
        {
            dfs(adj, visited, adj[x][i]);
        }
    }
}  

int main(int argc, char const *argv[])
{
    int N, M;
    cin >> N >> M;
    vector<int> *adj = new vector<int>[N + 1];

    int a, b;

    while (M--)
    {
        cin >> a >> b;
        addEdge(adj, a, b);
        //cout << a << " and " << b << " Added in the list " << endl;
    }

    //printGraph(adj,N);
    bool *visited = new bool[N + 1];
    for(int i = i; i <= N; i++){visited[i] = false;}
    int cnt = 0;
    for(int i = 1; i <= N; i ++)
    {
        if(!visited[i])
        {
            dfs(adj, visited,i);
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
