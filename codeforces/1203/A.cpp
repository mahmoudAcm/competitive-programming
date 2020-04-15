// Author : Mahmoud Tarek

#include <bits/stdc++.h>

using namespace std ;

#define sz(v) (int)v.size()
#define ll long long
#define all(v)  v.begin() , v.end()
#define rall(v)  v.rbegin() , v.rend()
#define pf push_front
#define pb push_back
#define fast FastInputOutput() ;
#define Clear( container , value ) memset( container , value , sizeof container )
#define forn( t , v , be , n ) for( t v = be ; v < n ; v++ )
#define fore( x , j ) for( auto x : j )
#define debug(x , y) cerr << #x << " = " << x << y ;

const ll Long_max = numeric_limits < ll > :: max() ;
const int Int_max = numeric_limits < int > :: max() ;

void File_input( string pathIn ) {
    freopen( pathIn.c_str(), "r", stdin ) ;
}

void File_output( string pathOut ) {
    freopen( pathOut.c_str(), "w", stdout ) ;
}

void FastInputOutput() {
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
}

int t , n ;
vector < int > a ;
int mod( int t , int b ){
return ( ( t % b ) + b ) % b ;
}

int main(){
  cin >> t ;
  while( t-- ){
     cin >> n ;
     a.resize( n ) ;
     forn( int , i , 0 , n ){
       cin >> a[ i ] ;
     }

     int cn = 1 , idx = 0 ;

     forn( int , i , 0 , n ){
        if( a[ i ] == 1 ) idx = i ;
     }

     int x = 1 ;
     cn++;

     while( cn <= n ){
        if( a[ mod( idx - 1 , n ) ] == cn || a[ mod( idx + 1 , n ) ] == cn ){
            if(  a[ mod( idx - 1 , n ) ] == cn ) idx = mod( idx - 1 , n ) ;
            else if(  a[ mod( idx + 1 , n ) ] == cn ) idx = mod( idx + 1 , n ) ;
            cn++ ;
        } else {
           x = 0 ;
           break ;
        }
     }

     cout << ( x ? "YES" : "NO" ) ;
     cout << "\n" ;

  }
  return 0 ;
}
