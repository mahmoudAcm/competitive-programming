/******++++
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

const int N = 2e5 + 5 ;
vector<int> adj[N] ;
bool vis[N] ;
int n, q, x, y ;

int idx ;
int mp[N], tic[N], lvl[N] ;

void dfs(int u){
vis[u] = 1 ;
mp[u] = idx ;
tic[idx++] = u ;
for(auto i: adj[u]){
    if(!vis[i]){
        dfs(i) ;
    }
}
lvl[u] = idx - 1 ;
}

int main() {
//  freopen("out.txt", "w", stdout) ;
    cin >> n >> q ;
    for(int i = 2 ; i <= n ; i++){
        cin >> x ;
        adj[i].push_back(x) ;
        adj[x].push_back(i) ;
    }

    dfs(1) ;

    while(q--){
        cin >> x >> y ;
        y--;
        int pos = mp[x] + y ;
        if(pos >= n || pos > lvl[x]){
           cout << "-1\n" ;
           continue ;
        }
        int c = tic[pos] ;
        cout << c << "\n" ;
    }



}



/*
  Empty set of troubles.
*/
