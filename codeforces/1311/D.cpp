/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int main() {

//    freopen("out.txt", "w", stdout) ;

    int t, a, b, c ;
    cin >> t ;
    while(t--){
        cin >> a >> b >> c  ;
        int mn = 1e9 + 5 ;
        vector<int> k(3) ;
        k = {-1, -1, -1} ;
        for(int i = 1 ; i <= 2 * a ; i++){
            for(int j = i ; j <= 2 * b ; j += i){
                int aa, bb, cc ;
                aa = i, bb = j ;
                for(int s = 0 ; s < 2 ; s++){
                    cc = (c / bb) * bb + s * bb ;
                    if(abs(aa - a) + abs(bb - b) + abs(cc - c) < mn){
                        mn = abs(aa - a) + abs(bb - b) + abs(cc - c) ;
                        k = {aa, bb, cc} ;
                    }
                }
            }
        }
        cout << mn << "\n" ;
        for(int i = 0 ; i < 3 ; i++){
            cout << k[i] << " " ;
        }
        cout << "\n" ;
    }


}

/*
  Empty set of troubles.
*/
