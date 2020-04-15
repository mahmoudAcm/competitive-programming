// Author : Mahmoud Tarek

#include <bits/stdc++.h>

using namespace std ;

#define sz(v) (int)v.size()
#define ll long long
#define all(v)  v.begin() , v.end()
#define rall(v)  v.rbegin() , v.rend()
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

ll n , l , r ;

int main(){
   cin >> n >> l >> r ;
   ll mn = 0 ;
   ll be = 1 ;
   ll cur = 1 ;
   mn += n ;
   while( be < l ){
      mn-- ;
      be++ ;
      cur *= 2 ;
      mn += cur ;
   }

   vector < ll > s( n , 1 );
   be = 1 ;
   cur = 1 ;
   while( be < r && n ){
     n-- ;
     cur *= 2 ;
     forn( int , i , 0 , n ){
       s[ i ] = cur ;
     }
     be++ ;
   }

   ll mx = 0 ;
   fore( i , s ) mx += i ;
   cout << mn << " " << mx ;



   return 0 ;
}
