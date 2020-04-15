#include<bits/stdc++.h>
using namespace std ;

const int N = 4 ;
int a[N] ;

int main(){
   ios_base :: sync_with_stdio( 0 ) ;
   cin.tie( 0 ) ;
   cout.tie( 0 ) ;

   for( int i = 0 ; i < 4 ; i++ ){
     cin >> a[i] ;
   }

   for( int i = 0 ; i < ( 1 << 4 ) ; i++ ){
     int s1, s2 ;
     s1 = s2 = 0 ;
     for( int j = 0 ; j < 4 ; j++ ){
        if( i & ( 1 << j ) ) s1 += a[j] ;
        else s2 += a[j] ;
     }
     if( s1 == s2 ){
        return cout << "YES\n", 0 ;
     }
   }
   cout << "NO\n" ;


}
