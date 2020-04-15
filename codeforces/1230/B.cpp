#include<bits/stdc++.h>
using namespace std ;

int main(){
   ios_base :: sync_with_stdio( 0 ) ;
   cin.tie( 0 ) ;
   cout.tie( 0 ) ;

   int n, k;
   string st ;
   cin >> n >> k ;
   cin >> st ;



   if( n == 1 ){
     if( k == 0 ){
         cout << st << "\n" ;
         return 0 ;
     }
     cout << "0\n" ;
     return 0 ;
   }

   if( k && st[0] != '1' ){
     st[0] = '1' ;
     k--;
   }

   for( int i = 1 ; i < n ; i++ ){
     if( k && st[i] != '0' ){
        st[i] = '0' ;
        k-- ;
     }
   }

   cout << st ;


}
