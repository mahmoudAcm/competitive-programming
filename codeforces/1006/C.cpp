/******++++
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int n;

int main() {
//  freopen("out.txt", "w", stdout) ;

   cin >> n ;
   vector<ll> a(n + 1);
   for(int i = 1 ; i <= n ; i++){
       cin >> a[i] ;
       a[i] += a[i-1] ;
   }

   int l = 1, r = n ;
   ll sumL, sumR ;
   sumL = sumR = 0 ;
   ll mx = 0 ;
   while(l < r){
     sumL = a[l] ;
     sumR = a[n] - a[r - 1] ;

     if(sumL < sumR){
        l++ ;
     } else if(sumR < sumL){
        r-- ;
     } else {
        mx = max(mx, sumL) ;
        l++;
        r-- ;
     }

   }


   cout << mx << "\n" ;


}



/*
  Empty set of troubles.
*/
