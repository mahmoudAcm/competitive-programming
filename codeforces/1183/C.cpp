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

int q ;
ll n , k , a , b ;
bool can( ll mid ){
ll sum = k - mid * a - ( n - mid ) * b ;
if( sum > 0 )
    return 1 ;
return 0 ;
}

int main(){

   cin >> q ;
   while( q-- ){
      cin >> k >> n >> a >> b ;
      ll l = 0 , r = n , mid ;
      while( l < r ){
        mid = ( l + r + 1 ) / 2 ;
        if( can( mid ) ){
            l = mid ;
        } else r = mid - 1 ;
      }
      if( !can( l ) ){
         cout << "-1\n" ;
         continue ;
      }
      cout << l << "\n" ;

   }


   return 0 ;
}
