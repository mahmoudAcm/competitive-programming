/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int n ;
vector<int> a ;

int main() {
//    freopen("in.txt", "r", stdin) ;
      cin >> n  ;
      a.resize(n + 1) ;
      vector<int> an(n + 4) ;
      ll sum = 0, s3 = 0, s4 = 0 ;
      for(int i = 1 ; i <= n ; i++){
        cin >> a[i] ;
        sum += a[i] ;
      }

      ll wan = sum / 3 ;

      for(int i = n ; i >= 1 ; i--){
           s4 += a[i] ;
           if(s4 == wan){
            an[i] = 1 ;
           }
      }

      for(int i = 1 ; i <= n ; i++){
           an[i] += an[i-1] ;
      }

      if(sum % 3){
        return cout << "0\n", 0 ;
      }

      ll s2 = 0 ;
      ll ways = 0 ;
      for(int i = 1 ; i <= n - 2 ; i++){
         s2 += a[i] ;
         if(s2 != wan) continue ;
         ways += an[n] - an[i+1] ;
      }

      cout << ways ;


}

 /*
  Empty set of troubles.
*/
