// Author : Mahmoud Tarek

#include <bits/stdc++.h>

using namespace std ;

int n , k ;


int len( int k ){
return  floor( log2( k ) ) + 1 ;
}

int main(){

  cin >> n >> k ;
  int mx = -2e5 ;
  vector < int > a( n ) ;
  unordered_map < int , int > mp ;
  for( int i = 0 ; i < n ; i++ ){
     cin >> a[ i ] ;
     mp[ a[ i ] ]++ ;
     mx = max( mx , a[ i ] ) ;
  }

  for( auto i : mp ){
     if( i.second >= k ){
         cout << "0\n" ;
         return 0 ;
     }
  }


  int mn = 1e9 ;

  for( int i = 1 ; i < mx ; i++ ){
     vector < int > rem ;
     for( int j = 0 ; j < n ; j++ ){
        int has = a[ j ] ;
        int cn = 0 ;
        while( has != i && has >= 1 ){
             has /= 2 ;
             cn++ ;
        }

        if( has == i ) rem.push_back( cn ) ;

     }

     int sz= rem.size() ;
     if( !sz || sz < k ) continue ;

     sort( rem.begin() , rem.end() ) ;
     int ct = 0 ;
     for( int j = 0 ; j < k ; j++ ) ct += rem[ j ] ;
     mn = min( ct, mn ) ;
  }


  cout << mn ;


  return 0 ;
}
