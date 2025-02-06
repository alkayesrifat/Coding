#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1000];
bool visited_or_not[1000];
int countt = 0;


void dfs(int src){

    countt++;
    visited_or_not[src] = true;

    for(int x : adj_list[src]){
        if(visited_or_not[x] == false){
            dfs(x);
            
        }
    }



}

int main()
{

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visited_or_not,false,sizeof(visited_or_not));
    int t;cin >> t;
    dfs(t);
    cout << countt ;

    return 0;
}