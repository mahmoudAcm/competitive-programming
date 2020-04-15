#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll;

int main() {

    ll t, n ;
    cin >> t ;
    while(t--){
        vector<ll> a(3) ;
        cin >> a[0] >> a[1] >> a[2] >> n ;
        sort(a.rbegin(), a.rend()) ;
        ll mx = a[0] - a[1] + a[0] - a[2] ;
        if(mx > n){
            cout << "NO\n" ;
        } else{
          n -= mx ;
          if(n % 3 == 0){
            cout << "YES\n" ;
          } else cout << "NO\n" ;
        }

    }

}

/*
 Empty set of troubles.
*/
