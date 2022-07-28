//https://www.acmicpc.net/problem/1260

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>

using std::cin; using std::cout; using std::endl;
using std::vector;

bool visited[1001] = {false, };
bool observed[1001] = {false, };
std::stack<int> stack;
std::queue<int> queue;
vector<int> nodes[1001];

void dfs(int start);
void bfs();

int main(){
    int dotn, linen, startind;
    cin >> dotn >> linen >> startind;

    for(int i = 1; i <= linen; i++){
        int a,b;
        cin >> a >> b;
        nodes[a].push_back(b);
        nodes[b].push_back(a);
    }

    for(int i = 1;i <= dotn ;i++){
        std::sort(nodes[i].begin(),nodes[i].end());
        // cout << i << " node have link: ";
        // for(int j = 0 ; j < nodes[i].size(); j++){
        //     cout << nodes[i][j] << ", ";
        // }
        // cout << endl;
    }

    dfs(startind);
    cout << endl;

    queue.push(startind);
    observed[startind] = true;
    cout << startind << " " ;
    while(!queue.empty()){
        bfs();
    }

}

void dfs(int top){
    stack.push(top);
    visited[top] = true;
    cout << top << " ";
    for(int i = 0; i < nodes[top].size();i++){
        if(!visited[nodes[top][i]]){
            dfs(nodes[top][i]);
        }
    }
    stack.pop();
}

void bfs(){
    int top = queue.front();
    visited[top] = true;
    queue.pop();
    for(int i = 0; i < nodes[top].size();i++){
        if(!observed[nodes[top][i]]){
            queue.push(nodes[top][i]);
            observed[nodes[top][i]] = true;
            cout << nodes[top][i] << " ";
        }
    }

}