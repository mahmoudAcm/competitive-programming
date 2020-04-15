#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

ll Pow(ll a, ll b){
ll res = 1 ;
for(int i = 0 ; i < b ; i++) res *= a ;
return res ;
}

int Max(int k){
  ll res, last ;
  for(int i = 64 ; i >= 1 ; i--){
      res = 1 ;
      bool can = 1 ;
      for(int j = 0 ; j < i ; j++){
        last = res ;
        res *= k;
        if(res / k != last){
            can = 0 ;
        }
      }
      if(can) return i - 2;
  }
  return 1 ;
}

bool can(ll &mid, int &n, int &k){
    int mx = Max(k) ;
    int cn = 0 ;
    for(int i = 0 ; i <= mx ; i++){
        if(!(mid / Pow(k, i))){
            cn = i ;
            break;
        }
    }

    ll sum = 0 ;
    for(int i = 0 ; i < cn ; i++){
        sum += (mid / Pow(k, i));
    }

    return sum >= n ;

}

int main() {

   int n, k ;
   cin >> n >> k ;

   ll l = 0, r = 1e11 , ans = 0 ;
   while(l < r){
     ll mid = (l + r + 1) / 2 ;
     if(can(mid, n, k)){
       r = mid - 1;
       ans = r + 1 ;
     } else l = mid ;
   }

   cout << ans << "\n" ;

}

/*
 Empty set of troubles.
*/
