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

    string s;
    int t, n, m, v ;
    vector<ll> ans ;
    cin >> t ;
    while(t--){
        cin >> n >> m ;
        cin >> s ;
        s = " " + s ;
        ans.resize(n+3) ;

        for(int i = 0 ; i < m ; i++){
            cin >> v ;
            ans[1] += 1 ;
            ans[v + 1] -= 1 ;
        }

        ans[1]++ ;
        ans[n + 1] -= 1 ;

        unordered_map<int, int> mp ;

        for(int i = 1 ; i <= n ; i++){
           ans[i] += ans[i-1] ;
        }



        for(int i = 1 ; i <= n ; i++){
            mp[s[i]] += ans[i] ;
            ans[i] = 0 ;
        }

        ans[n+1] = 0 ;

        for(char a = 'a' ; a <= 'z' ; a++){
            cout << mp[a] << " " ;
        }

        cout << "\n" ;

    }



}

/*
  Empty set of troubles.
*/
