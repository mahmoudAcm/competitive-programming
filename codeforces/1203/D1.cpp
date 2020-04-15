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

string s , t ;
int n ;
bool can( int mid ){

forn( int , i , 0 , n - mid + 1 ){
   string st = s.substr( 0 , i ) ;
   st += s.substr( i + mid , ( sz( s ) - ( i + mid ) ) + 1 ) ;
   int j = 0 ;
   fore( k , st ){
      if( k == t[ j ] && j < sz( t ) ) j++ ;
   }
   if( sz( t ) == j ) return 1 ;
}
return 0 ;
}


int main(){
  fast
  cin >> s >> t ;
  n = sz( s ) ;
  int l = 0 , r = sz( s ) ;
  while( l < r ){
     int mid = ( l + r + 1 ) >> 1 ;
     if( can( mid ) ){
        l = mid ;
     } else r = mid - 1 ;
  }

  cout << l ;


  return 0 ;
}


/*
aaaaafsddddddt
ft
*/
