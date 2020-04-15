#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int main() {

   ios_base :: sync_with_stdio(0) ;
   cin.tie(0) ;
   cout.tie(0) ;

   int n ;
   cin >> n ;
   vector<int> a(n+2), b(n + 2) ;
   for(int i = 1 ; i <= n ; i++) cin >> a[i] ;
   for(int i = 1 ; i <= n ; i++){
      b[max(1, i - a[i])] += 1 ;
      b[i] -= 1 ;
   }


   for(int i = 1 ; i <= n ; i++){
      b[i] += b[i-1] ;
   }

   int cn = 0 ;
   for(int i = 1; i <= n ; i++){
     if(b[i] <= 0) cn++ ;
   }

   cout << cn << "\n" ;
}

/*
 Empty set of troubles.
*/
