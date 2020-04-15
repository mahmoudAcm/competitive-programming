/******++++
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int main() {
//  freopen("out.txt", "w", stdout) ;

   int n ;
   string s ;
   cin >> n >> s ;
   s = " " + s ;
   for(int i = 2 ; i <= n ; i++){
     if(n % i == 0){
        reverse(s.begin() + 1, s.begin() + i + 1) ;
     }
   }

   cout << s.substr(1) ;


}

/*
  Empty set of troubles.
*/
