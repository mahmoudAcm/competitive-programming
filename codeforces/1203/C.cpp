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

int n ;
ll v ;
int main(){
  cin >> n ;
  cin >> v ;
  ll gcd = v ;
  forn( int , i , 0 , n - 1 ){
    cin >> v ;
    gcd = __gcd( v , gcd ) ;
  }

  set < ll > in ;
  for( ll i = 2 ; i * i <= gcd ; i++ ){
     if( gcd % i == 0 ){
        in.insert( i ) ;
        in.insert( gcd / i ) ;
     }
  }

  in.insert( gcd ) ;
  in.insert( 1 ) ;
  cout << sz( in ) ;

  return 0 ;
}

