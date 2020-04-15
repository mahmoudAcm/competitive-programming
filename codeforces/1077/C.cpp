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
#define PI acos( -1.0 )
#define forn( t , v , be , n ) for( t v = be ; v < n ; v++ )
#define fore( x , j ) for( auto x : j )
#define se second
#define fr first
//#define c_b fflush(stdin);

const ll Long_max = numeric_limits < ll > :: max() ;
const int Int_max = numeric_limits < int > :: max() ;

void File_input( string pathIn ) {
    freopen( pathIn.c_str(), "r", stdin ) ;
}

void File_output( string pathOut ) {
    freopen( pathOut.c_str(), "w", stdout ) ;
}

int msg() {
    srand( time( 0 ) ) ;
    vector < string > st = {
        "Wish everyone high ratings!",
        "Good luck!",
        "Have fun!",
        "Please, read all the problems!",
        "Go Go fight!"
    } ;
    cerr << st[ rand() % sz( st ) ] ;
    return 0 ;
}


void FastInputOutput() {
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
}

int n ;
ll sum = 0 ;

int main(){

   cin >> n ;
   vector < pair < int , int > > a( n ) ;
   forn( int , i , 0 , n ){
     cin >> a[ i ].first ;
     sum += a[ i ].first ;
     a[ i ].second = i ;
   }

   sort( all( a ) ) ;

   vector < int > el ;
   forn( int , i , 0 , n - 1 ){
       if( a[ n - 1 ].first == ( sum - a[ i ].first - a[ n - 1 ].first ) ) el.pb( a[ i ].second ) ;
   }

   if( sum - a.back().first - a[ n - 2 ].first == a[ n - 2 ].first ) el.push_back( a.back().second ) ;

   cout << sz( el ) << "\n" ;
   fore( i , el ){
     cout << i + 1 << " " ;
   }



   return 0 ;
}
