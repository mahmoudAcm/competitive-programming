/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int n, m, sum, c ;
unordered_map<int, int> mp ;
ll ans ;

int main() {
//    freopen("in.txt", "r", stdin) ;

      cin >> n >> m ;
      mp[0] = 1 ;
      bool can = 0 ;
      for(int i = 0 ; i < n ; i++){
        cin >> c ;
        if(c > m) sum++;
        else if(c < m) sum-- ;

        if(c == m) can = 1 ;
        if(can){
          ans += mp[sum] + mp[sum - 1] ;
        } else {
          mp[sum]++;
        }
      }

      cout << ans ;

}

 /*
  Empty set of troubles.
*/
