#include<bits/stdc++.h>

using namespace std ;

typedef long long ll ;

int t, n ;
const int N = 2e5 + 5 ;
vector<int> adj[N] ;
vector<int> c ;
int dist[N], vis[N] ;

void dfs(int s){
vis[s] = 1 ;
c.push_back(s) ;
for(auto i : adj[s]){
    if(!vis[i]){
        dfs(i) ;
    }
}
}

int main() {

    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cout.tie(0) ;

    cin >> t ;
    while(t--){
        cin >> n ;
        vector<int> a(n+1) ;
        for(int i = 1 ; i <= n ; i++){
            adj[i].clear() ;
            vis[i] = 0 ;
            dist[i] = 1 ;
        }
        for(int i = 1 ; i <= n ; i++){
            cin >> a[i] ;
            adj[i].push_back(a[i]) ;
        }

        for(int i = 1 ; i <= n ; i++){
            if(!vis[i]){
                c.clear() ;
                dfs(i) ;
                for(auto j : c){
                    dist[j] = c.size() ;
                }
            }
        }

        for(int i = 1 ; i <= n ; i++){
            cout << dist[i] << " " ;
        }
        cout << "\n" ;


    }


}
