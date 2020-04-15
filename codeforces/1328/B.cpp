/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int t ;
ll n, k ;
string s ;

const int N = 1e5 + 5 ;

int main() {
//  freopen("in.txt", "r", stdin) ;
    cin >> t ;

    vector<ll> a ;

    for(ll i = 1 ; i <= N ; i++){
        a.push_back( (i * (i - 1) / 2) ) ;
    }

    while(t--){
        cin >> n >> k ;
        ll sum = 0 ;
        s = "" ;
        for(int i = 0 ; i < n ; i++){
            s += "a" ;
        }
        auto pos = lower_bound(a.begin(), a.end(), k) ;
        int idx = n - (pos - a.begin()) ;
        idx-- ;

        int idx2 = idx + (*pos - k) ;
        s[idx] = 'b' ;
        s[idx2 + 1] = 'b' ;
        cout << s << "\n" ;

    }

}


/*
  Empty set of troubles.
*/
