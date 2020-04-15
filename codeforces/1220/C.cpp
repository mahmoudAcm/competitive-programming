#include<bits/stdc++.h>
using namespace std ;
#define ll long long

const int N = 5e5 + 5 ;
int p[ N ][ 'z' + 1 ] ;

int main(){
   ios_base :: sync_with_stdio( 0 ) ;
   cin.tie( 0 ) ;
   cout.tie( 0 ) ;

   string st ;
   cin >> st ;
   int n = st.size() ;
   st = " " + st ;
   for( int i = 1 ; i <= n ; i++ ){
     p[ i ][ st[ i ] ] = 1 ;
   }

   for( int i = 1 ; i <= n ; i++ ){
       for( char a = 'a' ; a <= 'z' ; a++ ){
           p[ i ][ a ] += p[ i - 1 ][ a ] ;
       }
   }


   for( int i = 1 ; i <= n ; i++ ){
       bool x = 0 ;
       for( char a = 'a' ; a < st[ i ] ; a++ ){
           if( p[ i - 1 ][ a ] ){
              x = 1 ;
              break ;
           }
       }
       if( !x ){
        cout << "Mike\n" ;
       } else cout << "Ann\n" ;
   }


}
