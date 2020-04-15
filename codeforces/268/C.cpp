#include<bits/stdc++.h>

using namespace std ;

#define dbg(v) cerr << #v << " " << v ;
typedef long long ll;

int n, m ;

int main() {

   cin >> n >> m ;
   int mn = min(n, m) ;

   cout << mn + 1 << "\n" ;
   for(int i = 0 ; i <= mn ; i++){
    cout << i << " " << mn - i << "\n" ;
   }




}
