/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int n ;
string s ;

int main() {
//  freopen("out.txt", "w", stdout) ;
    cin >> n ;
    while(n--){
        cin >> s ;
        int t = s.size() ;
        vector<int> pos ;
        pos.push_back(0) ;
        for(int i = 1 ; i <= t ; i++){
            if(s[i - 1] == 'R'){
                pos.push_back(i) ;
            }
        }
        pos.push_back(t + 1) ;

//        for(auto i: pos){
//            cout << i << " " ;
//        }
//
//        cout << "\n" ;

        t = pos.size() ;
        int mx = 0 ;
        for(int i = 1 ; i < t ; i++){
            mx = max(mx, pos[i] - pos[i - 1]) ;
        }

        cout << mx << "\n" ;

    }
}

/*
  Empty set of troubles.
*/
