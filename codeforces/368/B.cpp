#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll;

int l ;

int main() {
    int n, k ;
    cin >> n >> k ;
    vector<int> a(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }

    set<int> in ;
    vector<int> ans(n+2) ;

    for(int i = n - 1 ; i >= 0 ; i--){
        if(!in.count(a[i])){
            ans[i + 1] = 1 ;
        }
        in.insert(a[i]) ;
    }

    for(int i = n ; i >= 1 ; i--){
        ans[i] += ans[i+1] ;
    }

    while(k--){
         cin >> l ;
         cout << ans[l] << "\n" ;
    }
}

/*
 Empty set of troubles.
*/
