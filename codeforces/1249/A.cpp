#include<bits/stdc++.h>

using namespace std ;

typedef long long ll ;

int main() {

    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cout.tie(0) ;

    int t, n;
    cin >> t ;
    while(t--){
        cin >> n ;
        vector<int> a(n), in(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }

        sort(a.begin(), a.end()) ;

        int cn = 0;

            vector<int> c ;
        for(int i = 0 ; i < n ; i++){
            c.clear() ;
            if(!in[i]){
                in[i] = 1 ;
                c.push_back(a[i]) ;
                for(int j = 0 ; j < n ; j++){
                    if(!in[j] && abs(c.back() - a[j]) > 1){
                        c.push_back(a[j]);
                        in[j] = 1 ;
                    }
                }
                cn++ ;
            }
        }


        cout << cn << "\n" ;




    }



}
