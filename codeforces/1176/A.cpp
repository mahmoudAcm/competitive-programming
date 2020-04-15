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

int dx[ ] = { 1, -1, 0, 0, 1, -1, -1, 1 } ;
int dy[ ] = { 0, 0, -1, 1, 1, -1, 1, -1 } ;

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

int t ;
ll v ;

int main() {
   cin >> t ;
   while( t-- ){
       cin >> v ;
       int cnt = 0 ;
       bool x = 0 ;
       while( 1 ){
         bool c = 0 ;
         if( v % 2 == 0 ){
            v /= 2 ;
            c = 1 ;
            cnt++ ;
         } else if( v % 3 == 0 ){
            v = 2 * v ;
            v /= 3 ;
            c = 1 ;
            cnt++ ;
         } else if( v % 5 == 0 ){
            v = 4 * v ;
            v /= 5 ;
            c = 1 ;
            cnt++ ;
         }

         if( !c && v != 1 ){
            x = 1 ;
            break ;
         } else if( v == 1 ){
            x = 0 ;
            break ;
         }

       }
       if( !x ){
         cout << cnt << "\n" ;
       } else cout << -1 << "\n" ;
   }
   return 0 ;
}

