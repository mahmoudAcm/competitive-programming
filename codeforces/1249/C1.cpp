#include<bits/stdc++.h>

using namespace std ;

typedef long long ll ;

vector<ll> ans ;

int main() {

    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cout.tie(0) ;

    for(int i = 0 ; i < 1 << 12 ; i++){
        ll k = 0 ;
        for(int j = 0 ; j < 12 ; j++){
            if(i & ( 1 << j )){
               int mul = 1 ;
               for(int c = 0 ; c < j ; c++){
                  mul *= 3 ;
               }
            k += mul ;
            }
        }
        ans.push_back(k) ;
    }

    sort(ans.begin(), ans.end()) ;

    int t, n ;
    cin >> t ;
    while(t--){
        cin >> n ;
        cout << *lower_bound(ans.begin(), ans.end(), n) << "\n" ;
    }

}
