#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int main() {

   int n, a ;
   cin >> n >> a ;
   vector<int> b(n+1), c(n + 1) ;
   for(int i = 1 ; i <= n ; i++){
     cin >> b[i] ;
   }

   bool ok = 0 ;
   c[a] = b[a] ;
   int i = 1 ;
   while(i < 5 * n){
      if(a + i <= n && a - i >= 1){
         if(b[a + i] && b[a - i]) c[a + i] = c[a - i] = 1 ;
      } else {
         if(a - i >= 1) c[a - i] = b[a - i] ;
         else if(a + i <= n) c[a + i] = b[a + i] ;
      }
      i++;
   }


   cout << accumulate(c.begin(), c.end(), 0ll) ;


}

/*
 Empty set of troubles.
*/
