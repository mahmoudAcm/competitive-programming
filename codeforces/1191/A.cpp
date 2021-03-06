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


string ans( int n , string a , int rem ){

forn( int , i , 0 , 200 ){
  if( 4 * i + rem == n && n % 4 == rem ){
    return "0 " + a ;
  }
}

forn( int , i , 0 , 200 ){
  if( 4 * i + rem == n + 1 && ( n + 1 ) % 4 == rem ){
    return "1 " + a ;
  }
}

forn( int , i , 0 , 200 ){
  if( 4 * i + rem == n + 2 && ( n + 2 ) % 4 == rem ){
    return "2 " + a ;
  }
}

return "-1" ;
}

int main() {

    int n ;
    cin >> n ;

    if( ans( n , "A" , 1 ) != "-1" ){
        cout << ans( n , "A" , 1 ) << "\n" ;
        return 0 ;
    }


    if( ans( n , "B" , 3 ) != "-1" ){
        cout << ans( n , "B" , 3 ) << "\n" ;
        return 0 ;
    }

    if( ans( n , "C" , 2 ) != "-1" ){
        cout << ans( n , "C" , 2 ) << "\n" ;
        return 0 ;
    }

    if( ans( n , "D" , 0 ) != "-1" ){
        cout << ans( n , "D" , 0 ) << "\n" ;
        return 0 ;
    }





    return 0 ;
}

