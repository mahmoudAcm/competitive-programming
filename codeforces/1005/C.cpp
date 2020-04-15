/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int n;
vector<int> a ;

int main() {
//  freopen("out.txt", "w", stdout) ;

    cin >> n ;
    a.resize(n) ;
    unordered_map<int, int> mp ;
    for(int i = 0 ; i < n;  i++){
        cin >> a[i] ;
        mp[a[i]]++ ;
    }

    int cn = 0 ;
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < 31 ; j++){
            int lef = 1 << j ;
            int lft = lef ;
            lef -= a[i] ;
            if(lef != a[i] && mp[lef]){
                cn++ ;
//                cout << a[i] << " " << lef << " " ;
//                cout << "why: " << lft << "\n" ;
                break ;
            }
            if(lef == a[i] && mp[lef] > 1){
                cn++ ;
//                cout << a[i] << "\n" ;
                break ;
            }
        }
    }

    cout << n - cn ;

}

/*
  Empty set of troubles.
*/
