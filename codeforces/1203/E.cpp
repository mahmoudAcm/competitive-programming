// Author : Mahmoud Tarek

#include <bits/stdc++.h>

using namespace std ;

int main(){

  ios_base :: sync_with_stdio( 0 ) ;
  cin.tie(0);
  cout.tie(0) ;

  int n , v ;
  cin >> n ;
  unordered_map < int , int > mp ;
  vector < int > a( n ) ;
  for( int i = 0 ; i < n ; i++ ){
     cin >> a[ i ] ;
  }

  sort( a.begin() , a.end() ) ;

  for( auto v : a ){
        if( !mp.count( v - 1 ) && v - 1 > 0 ){
            mp[ v - 1 ] = 1;
        } else if( !mp.count( v ) ){
            mp[ v ] = 1 ;
        } else if( !mp.count( v + 1 ) ){
           mp[ v + 1 ] = 1 ;
        }
  }
  cout << mp.size() ;



/*
6
1 2 4 4 4 5
*/




  return 0 ;
}
