/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int t;
ll a, b ;

int main() {
//  freopen("in.txt", "r", stdin) ;
    cin >> t ;
    while(t--){
        cin >> a >> b ;
        ll cur = a / b ;
        cur += (a % b ? 1 : 0) ;
        cout << (cur * b - a) << "\n" ;
    }
}


/*
  Empty set of troubles.
*/
