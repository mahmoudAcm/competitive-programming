#include<bits/stdc++.h>
using namespace std ;
#define ll long long

int main(){
   ios_base :: sync_with_stdio( 0 ) ;
   cin.tie( 0 ) ;
   cout.tie( 0 ) ;
   int n ;
   string st ;
   cin >> n >> st ;
   unordered_map < char , int > m ;
   for( auto i : st ){
      m[ i ]++ ;
   }

   int d = min( m['o'] , m['e'] ) ;
   d = min( m['n'] , d ) ;

   m['o'] -= d ;
   m['e'] -= d ;
   m['n'] -= d ;

   int ans = d , k = 0 ;

   if( m['o'] && m['z'] && m['r'] && m['e'] ){
       k = max( 0 , min( min( m['o'] , m['z'] ) , min( m['r'] , m['e'] ) ) ) ;
   }

   for( int i = 0 ; i < ans ; i++ ){
     cout << "1 " ;
   }

   for( int i = 0 ; i < k ; i++ ){
     cout << "0 " ;
   }




}
