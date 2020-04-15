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
string str ;
const int N = 2e5 + 5 ;
int pre[ N ][ 'z' + 1 ] ;
int q ;
int frq[ 'z' + 1 ] ;

bool can( int mid ){
forn( char , a , 'a' , 'z' + 1 ){
  if( frq[ a ] > pre[ mid ][ a ] ) return 0 ;
}
return 1 ;
}

int main(){

   cin >> n ;
   cin >> str ;
   forn( int , i , 1 , n + 1 ){
     pre[ i ][ str[ i - 1 ] ] = 1 ;
   }

   forn( int , i , 1 , n + 1 ){
     forn( char , a , 'a' , 'z' + 1 ){
       pre[ i ][ a ] += pre[ i - 1 ][ a ] ;
     }
   }

   cin >> q ;
   while( q-- ){
     cin >> str ;
     forn( char , a , 'a' , 'z' + 1 ){
        frq[ a ] = 0 ;
     }
     forn( int , i , 0 , sz( str ) ) {
       frq[ str[ i ] ]++ ;
     }
     int l = 1 , r = n , mid ;
     while( l < r ){
        mid = ( l + r ) / 2 ;
        if( can( mid ) ){
            r = mid ;
        } else l = mid + 1 ;
     }

     cout << l << "\n" ;
   }



   return 0 ;
}
