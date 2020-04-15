/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int t, n ;

int main() {
//  freopen("out.txt", "w", stdout) ;

    cin >> t ;
    while(t--){
        cin >> n ;
        vector<int> a(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }

        sort(a.begin(), a.end()) ;

        bool can = 1 ;
        unordered_map<int, int> mp ;
        for(int i = 1 ; i < n ; i++){
            mp[ (a[i] - a[i-1]) % 2 ]++ ;
        }


        for(auto i: mp){
            if(i.first == 1){
                can = 0 ;
            }
        }

        cout << (can? "YES\n" : "NO\n") ;

    }



}

/*
  Empty set of troubles.
*/