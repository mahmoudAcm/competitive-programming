#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int main() {

   int n, v ;
   cin >> n ;
   set<int> in ;
   int mx = 0 ;
   unordered_map<int, int> mp ;
   for(int i = 0 ; i < n * 2 ; i++){
     cin >> v ;
     if(!mp[v]){
        in.insert(v) ;
        mx = max(mx, (int)in.size()) ;
     } else if(mp[v]){
        in.erase(v) ;
     }
     mx = max(mx, (int)in.size()) ;
     mp[v] = 1 ;
   }


   cout << mx << "\n" ;
}

/*
 Empty set of troubles.
*/
