#include<bits/stdc++.h>

using namespace std ;

#define dbg(v) cerr << #v << " " << v ;
typedef long long ll;
map<pair<int, int>, ll> frq ;
map<int, ll> xx, yy ;
int n, x, y ;

int main() {

    cin >> n ;
    for(int i = 0 ; i < n ; i++){
        cin >> x >> y ;
        frq[{x, y}]++ ;
        xx[x]++ ;
        yy[y]++ ;
    }

    ll sum = 0 ;
    for(auto i: xx){
        sum += i.second * (i.second - 1) / 2 ;
    }

    for(auto i: yy){
        sum += i.second * (i.second - 1) / 2 ;
    }


    for(auto i: frq){
        sum -= (i.second * (i.second - 1) / 2) ;
    }

    cout << sum ;



}
