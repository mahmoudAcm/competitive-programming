/******
author :- Mahmoud Tarek.
*******/

#include <bits/stdc++.h>

using namespace std;

#define rg register
#define dbg(v) cerr << #v << " " << v;
typedef long long ll;

int t, n, v ;

int main(){
  //freopen("in.txt", "r", stdin);
   cin >> t ;
   while(t--){
    cin >> n ;
    unordered_map<int, int> mp ;
    for(int i = 0 ; i < n ; i++){
        cin >> v ;
        mp[v]++ ;
    }

    int mx = 0 ;
    for(auto i: mp){
        if(mp.size() - 1 >= i.second){
            mx = max(mx, i.second) ;
        } else{
            mx = max(mx, min((int)mp.size() - (i.second == 1), i.second - (i.second >= 2))) ;
        }
    }

    cout << mx << "\n" ;



   }
}

/*
  Empty set of troubles.
*/
