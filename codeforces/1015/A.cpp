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
   int n, m, x, y ;
   cin >> n >> m ;
   vector<int> a(m + 2) ;
   for(int i = 0 ; i < n ; i++){
    cin >> x >> y ;
    a[x] += 1 ;
    a[y + 1] -= 1 ;
   }

   vector<int> v ;
   for(int i = 1 ; i <= m ; i++){
    a[i] += a[i-1] ;
    if(!a[i]) v.push_back(i) ;
   }

   cout << v.size() << "\n" ;
   for(auto i: v) cout << i << " " ;

}

/*
  Empty set of troubles.
*/
