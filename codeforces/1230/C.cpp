#include<bits/stdc++.h>
using namespace std ;

int n, m, f, t ;
const int N = 10 ;
vector<int>adj[N] ;
int col[N] ;
int dj[N][N] ;

int mn = -21 ;
int ret ;

void dfs(int u){
if( u == n + 1 ){
   ret = 0 ;
   for(int i = 1 ; i <= 6 ; i++){
    for(int j = i ; j <= 6 ; j++ ){
        dj[i][j] = 0 ;
    }
   }
   for(int i = 1 ; i <= n ; i++ ){
     for(auto j : adj[i]){
        int c = col[i] ;
        int k = col[j] ;
        if( !dj[c][k] && c <= k ){
            ret++ ;
            dj[c][k] = 1 ;
        }
     }
   }
   mn = max(mn, ret ) ;
   return ;
}
for(int i = 1 ; i <= 6 ; i++ ){
    if( !col[u] ){
        col[u] = i ;
        dfs(u+1) ;
        col[u] = 0 ;
    }
}
}

int main(){
  cin >> n >> m ;
  while(m--){
    cin >> f >> t ;
    adj[f].push_back(t);
    adj[t].push_back(f);
  }
  dfs(1) ;
  cout << mn << "\n" ;
}
