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
vector < int > a ;
bool can(){
forn( int , i , 0 , n ){
  if( a[ i ] >= a[ ( i - 1 ) % n ] + a[ ( i + 1 ) % n ] ){
    return 0 ;
  }
}
return 1 ;
}

int main() {
    cin >> n ;
    a.resize( n );
    forn( int , i , 0 , n ){
      cin >> a[ i ] ;
    }

    sort( all( a ) ) ;
    if( can() ){
        cout << "YES\n" ;
        fore( i , a ) cout << i << " " ;
        return 0 ;
    }

    swap( a.back() , a[ n - 2 ] ) ;
    if( can() ){
        cout << "YES\n" ;
        fore( i , a ) cout << i << " " ;
        return 0 ;
    }

    cout << "NO\n";

    return 0 ;
}
