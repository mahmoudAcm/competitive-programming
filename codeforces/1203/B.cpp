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

int t , n , v ;
bool solve(){
cin >> n ;
vector < ll > a( 4 * n ) ;
forn( int , i , 0 , 4 * n ){
  cin >> a[ i ] ;
}
sort( all( a ) ) ;
for( int i = 0 ; i < 4 * n ; i += 2 ) if( a[ i ] != a[ i + 1 ] ) return 0;
ll l = 0 , r = 4 * ( n ) - 1 ;
ll mx = a[ l ] * a[ r ] ;
l++ , r--;
while( l <= r ){
 if( a[ l ] * a[ r ] != mx ) return 0 ;
 l++ , r-- ;
}
return 1 ;
}

int main(){

  cin >> t ;
  while( t-- ){
    if( solve() ){
        puts("YES") ;
    } else puts("NO") ;
  }

  return 0 ;
}
