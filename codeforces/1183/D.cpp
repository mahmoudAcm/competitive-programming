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
int n , v ;
const int N = 2e5 + 5 ;
int frq[ N ] ;
ll b[ N ] ;
vector < ll > st ;
int idx_b ;

int main(){
   scanf("%d" , &q ) ;
   while( q-- ){
     scanf("%d" , &n ) ;

     forn( int , i , 1 , n + 1 )
       frq[ i ] = 0 ;


     forn( int , i , 0 , n ){
       scanf("%d" , &v ) ;
       frq[ v ]++ ;
     }
     idx_b = 0 ;
     forn( int , i , 1 , n + 1 ){
       if( frq[ i ] ){
         b[ idx_b++ ] = frq[ i ] ;
       }
     }

     sort( b , b + idx_b ) ;
     reverse( b , b + idx_b ) ;
     ll sum = 0;


     st.pb( b[ 0 ] ) ;
     sum = b[ 0 ] ;
     forn( int , i , 1 , idx_b ){
        if( b[ i ] >= st.back() ){
            st.pb( max( st.back() - 1 , 0 * 1LL ) ) ;
            sum += st.back() ;
        } else {
            st.pb(  b[ i ] ) ;
            sum += b[ i ] ;
        }
     }
    printf("%lld\n" , sum ) ;


   }
   return 0 ;
}
