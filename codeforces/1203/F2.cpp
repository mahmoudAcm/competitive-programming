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

int n , r , a , b ;
vector < pair < int , int > > pos , neg ;

bool cmp( pair < int , int > s , pair < int , int > f ){
if( s.first != f.first ) return s.first < f.first ;
return s.second > f.second ;
}


bool cmp2(  pair < int , int > s , pair < int , int > f ){
return s.first + s.second > f.first + f.second ;
}

int dp[ 101 ][ 60007 ] ;
int solve( int i , int rem ){
if( i == sz( neg ) ) return 0 ;
int & ret = dp[ i ][ rem ] ;
if( ~ret ) return ret ;
ret = 0 ;
if( neg[ i ].first <= rem && rem + neg[ i ].second >= 0 ) ret = 1 + solve( i + 1 , rem + neg[ i ].second ) ;
ret = max( ret , solve( i + 1 , rem ) ) ;
return ret ;
}

int main(){
  cin >> n >> r ;
  forn( int , i , 0 , n ){
    cin >> a >> b ;
    if( b <= 0 ) neg.pb( { a , b } ) ;
    else pos.pb( { a , b } ) ;
  }
  Clear( dp , -1 ) ;
  sort( all( pos ) , cmp ) ;
  sort( all( neg ) , cmp2 ) ;
  int ans = 0;
  fore( i , pos ) if( i.first <= r ) r += i.second , ans++ ;
  ans += solve( 0 , r ) ;
  cout << ans ;


  return 0 ;
}
