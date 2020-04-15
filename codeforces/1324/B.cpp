/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int t, n, v;

int main() {
//  freopen("out.txt", "w", stdout) ;

    cin >> t ;
    while(t--){
        cin >> n ;

        unordered_map<int, vector<int>> pos ;
        for(int i = 0 ; i < n ; i++){
            cin >> v ;
            pos[v].push_back(i) ;
        }

        bool can = 0 ;
        for(auto i: pos){
            if(i.second.size() >= 2){
                if(abs(i.second.front() - i.second.back()) >= 2){
                    can = 1 ;
                }
            }
        }

        if(can){
            cout << "YES\n" ;
        } else cout << "NO\n" ;

    }



}

/*
  Empty set of troubles.
*/
