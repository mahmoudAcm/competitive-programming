#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

const int N = 1e5 + 5 ;
vector<pair<int, int>> adj[N] ;
int mx ;

struct raph{
int cost, node ;
bool operator < (const raph & s) const{
  return s.cost < cost ;
}
};

bitset<N> vis ;

void dfs(int u, int dp){
   vis[u] = 1 ;
   for(auto i: adj[u]){
     if(!vis[i.first]){
        dfs(i.first, dp + i.second) ;
     }
   }
   if(adj[u].size() == 1 && u != 1){
     mx = max(dp, mx) ;
   }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, l, r, w ;
  cin >> n ;
  ll sum = 0 ;
  for(int i = 0 ; i < n - 1 ; i++){
     cin >> l >> r >> w ;
     sum += 2 * w ;
     adj[l].push_back({r, w});
     adj[r].push_back({l, w});
  }

//  Build_dpth() ;
  //test dfs
  dfs(1, 0) ;

  cout << sum - mx ;




}

/*
 Empty set of troubles.
*/
