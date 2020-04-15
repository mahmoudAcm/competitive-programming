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

int n , k ;
vector < pair < ll , ll > > a ;

bool cmp( pair < ll , ll > s , pair < ll , ll > f ){
   return f.second < s.second ;
}



int main(){
 fast
 cin >> n >> k ;
 a.resize( n ) ;
 forn( int , i , 0 , n ){
   cin >> a[ i ].first >> a[ i ].second ;
 }

 sort( all( a ) , cmp ) ;

 priority_queue < int , vector < int > , greater < int > > q ;

 ll sum = 0 ;
 ll res = 0 ;
 forn( int , i , 0 , n ){
   q.push( a[ i ].first ) ;
   sum += a[ i ].first ;
   if( sz( q ) > k ){
     sum -= q.top() ;
     q.pop() ;
   }
   res = max( res , sum * a[ i ].second ) ;
 }

 cout << res ;

 return 0 ;
}
