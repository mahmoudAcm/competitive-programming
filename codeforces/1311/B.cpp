/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

const int N = 200 ;
vector<int> adj[N] ;
int vis[N] ;
int t, n, m, v ;
vector<int> a ;
int ans[N] ;
multiset<int> idx, val ;

void dfs(int u){
vis[u] = 1 ;
idx.insert(u) ;
val.insert(a[u]) ;
for(auto i: adj[u]){
    if(!vis[i]){
        dfs(i) ;
    }
}
}

int main() {

//   freopen("out.txt", "w", stdout) ;

   cin >> t ;
   while(t--){
    cin >> n >> m ;
    a.resize(n + 1) ;

    for(int i = 1 ; i <= n ; i++){
        cin >> a[i] ;
        ans[i] = a[i] ;
        vis[i] = 0 ;
        adj[i].clear() ;
    }


    for(int j = 0 ; j < m ; j++){
        cin >> v ;
        adj[v].push_back(v + 1) ;
        adj[v + 1].push_back(v) ;
    }

    for(int i = 1 ; i <= n ; i++){
        if(!vis[i]){
            dfs(i) ;
            for(auto i: idx){
                ans[i] = *val.begin() ;
                val.erase(val.begin()) ;
            }
            val.clear() ;
            idx.clear() ;
        }
    }

    bool can = 1 ;
    for(int i = 1 ; i <= n ; i++){
        if(ans[i] < ans[i - 1]) can = 0 ;
    }

    cout << (can? "YES\n": "NO\n") ;

   }


}

/*
  Empty set of troubles.
*/
