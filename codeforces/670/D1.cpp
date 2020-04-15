#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

ll n, k ;
vector<ll> a, b ;

bool can(ll lft, ll mx){
    int cn = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(b[i] / a[i] >= lft) continue;
        if(((lft * a[i]) - b[i]) < 0) return 0 ;
        mx -= (lft * a[i]) - b[i] ;
    }
    return mx >= 0 ;
}

int main() {

//    freopen("in.txt", "r", stdin);

    cin >> n >> k ;
    a.resize(n);
    b.resize(n);
    ll mn = 1e11;
    for(ll i = 0 ; i < n ; i++){
         cin >> a[i] ;
    }

    for(ll i = 0 ; i < n ; i++){
         cin >> b[i] ;
         mn = min(b[i] / a[i] * 1ll, mn) ;
    }

    ll l, r, ans = mn ;
    l = 0 , r = 2e7 ;
    while(l < r){
        ll mid = (l + r + 1) / 2 ;
        if(can(mid, k)){
            l = mid ;
        } else r = mid - 1;
    }

    cout << l << "\n" ;


}

/*
 Empty set of troubles.
*/
