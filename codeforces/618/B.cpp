#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;


int main() {

//   freopen("in.txt", "r", stdin) ;

   int n ;
   cin >> n ;
   vector<int> a(n+1) ;
   int b[n+1][n+1] ;
   memset(b, -1, sizeof b) ;
   for(int i = 1 ; i <= n ; i++){
     for(int j = 1 ; j <= n ; j++){
          cin >> b[i][j] ;
     }
   }


   for(int i = 1 ; i <= n ; i++){

      unordered_map<int, int> mp ;
      for(int j = 1 ; j <= n ; j++){
           mp[b[i][j]]++ ;
      }

      int mx = 0, ans = -1 ;
      for(auto i: mp){
        if(i.second > mx && i.second > 1){
            mx = i.second ;
            ans = max(ans, i.first) ;
        }
      }

      if(ans != -1)
      a[i] = ans ;

   }


   int k = n ;
   for(int i = 1 ; i <= n ; i++) {
        if(!a[i]) a[i] = k--;
        cout << a[i] << " " ;
   }

}

/*
 Empty set of troubles.
*/
