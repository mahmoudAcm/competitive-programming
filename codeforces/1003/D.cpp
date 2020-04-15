/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int main() {
//  freopen("out.txt", "w", stdout) ;

    ios_base :: sync_with_stdio(0) ;
    cin.tie(0) ;
    cout.tie(0) ;

    int n, q, v ;
    cin >> n >> q ;
    unordered_map<int, int> mp;
    for(int i = 0 ; i < n ; i++){
        cin >> v ;
        mp[v]++ ;
    }


    vector<pair<int, int>> vec ;

    while(q--){
        cin >> v ;
        bool can = 0 ;
        int ns = 0 ;

        vec.clear();

        for(int i = 0 ; i < 30 ; i++){
            if(v & ( 1 << i)){
              int k = (v & ( 1 << i)) ;
              if(mp[k]){
                 mp[k] -= 1 ;
                 ns += 1 ;
                 vec.push_back({k, 1}) ;
                 can = 1 ;
                 continue ;
              }

              int rem = k ;

              vector<int> num ;
              while(k){
                k /= 2;
                if(k >= 1)
                num.push_back(k) ;
              }

              int nk = 0 ;
              can = 0 ;

              for(auto j: num){
                 int cur = min(rem / j, mp[j]) ;
                 mp[j] -= cur ;
                 rem -= j * cur ;
                 nk += cur ;
                 vec.push_back({j, cur}) ;
                 if(rem == 0) break;
              }

              if(rem == 0){
                can = 1 ;
                ns += nk ;
                continue ;
              } else {
                break;
              }


            }
        }
        if(!can){
            cout << "-1" ;
        } else cout << ns ;
        cout << "\n" ;
        for(auto i: vec){
            mp[i.first] += i.second ;
        }
    }

}

/*
  Empty set of troubles.
*/
