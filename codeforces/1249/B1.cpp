#include<bits/stdc++.h>

using namespace std ;

typedef long long ll ;

int t, n ;

int main() {

    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cout.tie(0) ;

    cin >> t ;
    while(t--){
        cin >> n ;
        vector<int> a(n+1) ;
        for(int i = 1 ; i <= n ; i++){
            cin >> a[i] ;
        }
        for(int i = 1 ; i <= n ; i++){
            int cur = a[i] ;
            int cn = 1 ;
            while(cur != i){
                cn++ ;
                cur = a[cur] ;
            }
            cout << cn << " " ;
        }
        cout << "\n" ;
    }



}
