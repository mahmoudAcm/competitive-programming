#include<bits/stdc++.h>

using namespace std ;

int n, m, t, rel ;
const int N = 400 ;
vector<int> adj[N] ;
bool vis[N] ;

void addEdg(int u, int v){
adj[u].push_back(v) ;
adj[v].push_back(u) ;
}
int cn = 0 ;

void dfs(int u){
vis[u] = 1 ;
//cout << u << " " ;
for(auto i : adj[u]){
    if(!vis[i]){
        dfs(i) ;
    }
}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m ;
    for(int i = 1 ; i <= n ; i++){
        cin >> t ;
        while(t--){
            cin >> rel ;
            addEdg(i, rel+(n*2)) ;
        }
    }

    int sorry = 0 ;
    for(int i = 1 ; i <= n ; i++){
        if(!adj[i].size()){ sorry++; continue; }
        if(!vis[i]){
            cn++;
            dfs(i) ;
        }
    }


    cout << max(0, (cn - 1)) + sorry ;


}
