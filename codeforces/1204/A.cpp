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

int main(){
   string str ;
   cin >> str ;

   if( str == "0" || str == "1" ) return cout << "0" , 0 ;

   int one = count( all( str ) , '1') ;
   int idx = str.find('1') ;

   idx = sz( str ) - idx - 1 ;
   if( idx % 2 == 0 && one == 1 ){
     cout << idx / 2 ;
     return 0 ;
   } else if( idx % 2 == 0 && one > 1 ) {
      cout << idx / 2 + 1 ;
      return 0 ;
   }

   cout << idx / 2 + 1 ;


   return 0 ;
}
