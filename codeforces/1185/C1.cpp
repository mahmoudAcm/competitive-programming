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

int n , k ;

int main(){
   fast
   cin >> n >> k ;
   vector < int > a( n ) , frq( 200 ) ;
   forn( int , i , 0 , n ){
     cin >> a[ i ] ;
   }

   int sum = 0 ;
   forn( int , i , 0 , n ){

      if( sum + a[ i ] <= k ){
        cout << "0 " ;
        frq[ a[ i ] ]++ ;
        sum += a[ i ] ;
        continue ;
      }
      int cnt = 0 ;
      int lft = sum ;

      for( int j = 100 ; j > 0 ; j-- ){

          if( ( lft - j * frq[ j ] ) + a[ i ] > k ){
            lft -= j * frq[ j ] ;
            cnt += frq[ j ] ;
          } else {
            cnt += ( ( ( lft + a[ i ] ) - k ) + j - 1 ) / j ;
            break ;
          }
      }

      cout << cnt << " " ;
      sum += a[ i ] ;
      frq[ a[ i ] ]++ ;
   }

   return 0 ;
}
