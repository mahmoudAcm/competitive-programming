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
string s1 , s2 ;

int main() {
   fast
   cin >> t ;
   while( t-- ){
     cin >> s1 >> s2 ;
     int s = sz( s1 ) ;
     vector < pair < char , int > > tcp ;
     char a = s1.front() ;
     forn( int , i , 0 , s ){
       a =  s1[ i ] ;
       if( s1[ i ] == a ){
         int cnt = 0 ;
         while( i < s && s1[ i ] == a ){
            i++ ;
            cnt++ ;
         }
         i-- ;
         tcp.pb( { s1[ i ] , cnt } ) ;
       }
     }

     s = sz( s2 ) ;
     vector < pair < char , int > > tc ;
     a = s2.front() ;
     forn( int , i , 0 , s ){
       a =  s2[ i ] ;
       if( s2[ i ] == a ){
         int cnt = 0 ;
         while( i < s && s2[ i ] == a ){
            i++ ;
            cnt++ ;
         }
         i-- ;
         tc.pb( { s2[ i ] , cnt } ) ;
       }
     }

     if( sz( tc ) != sz( tcp ) ){
        cout << "NO\n" ;
     } else {
       int n = sz( tcp ) ;
       bool in = 1 ;
       forn( int , i , 0 , n ){
           if( tcp[ i ].second > tc[ i ].second || tcp[ i ].first != tc[ i ].first ){
             in = 0 ;
             break ;
           }
       }
       cout << ( in ? "YES\n" : "NO\n" ) ;
     }


   }

   return 0 ;
}

