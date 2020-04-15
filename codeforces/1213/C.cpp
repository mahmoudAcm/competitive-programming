// Author : Mahmoud Tarek

#include <bits/stdc++.h>

using namespace std ;

int main(){

  ios_base :: sync_with_stdio( 0 ) ;
  cin.tie(0);
  cout.tie(0) ;

  int q ;
  long long n , m ;
  cin >> q ;
  while( q-- ){
     cin >> n >> m ;
     unordered_map < long long , long long > mp ;
     vector < long long > a ;
     long long x = m ;
     while( !mp[ x % 10 ] ){
         mp[ x % 10 ] = 1 ;
         a.push_back( x % 10 ) ;
         x += m ;
     }

     long long rem = n / m ;


     long long sum = 0 ;

     for( auto i : mp ){
        sum += i.first ;
     }

     sum = ( sum * ( rem / mp.size() ) ) ;

     for( int i = 0 ; i < min( ( rem % mp.size() ) , (long long)mp.size() ) ; i++ ){
        sum += a[ i ] ;
     }

     cout << sum << "\n" ;



  }

  return 0 ;
}
