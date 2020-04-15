// Author : Mahmoud Tarek

#include <bits/stdc++.h>

using namespace std ;

int main(){

  ios_base :: sync_with_stdio( 0 ) ;
  cin.tie(0);
  cout.tie(0) ;

  vector < int > tmp ;
  vector < int > a ;

  int q , n ;
  cin >> q ;
  while( q-- ){
     cin >> n ;
     a.resize( n ) ;

     for( int i = 0 ; i < n ; i++ ){
        cin >> a[ i ] ;
     }

     tmp.clear() ;

     int sum = 0 ;


     tmp.push_back( a.front() ) ;
     for( int i = 1 ; i < n ; i++ ){
        if( tmp.size() && tmp.back() > a[ i ] ){
            while( tmp.size() && tmp.back() > a[ i ] ){
                tmp.pop_back() ;
                sum++ ;
            }
            tmp.push_back( a[ i ] ) ;
        } else {
            tmp.push_back( a[ i ] ) ;
        }
     }
     cout << sum << "\n" ;

  }

  return 0 ;
}
