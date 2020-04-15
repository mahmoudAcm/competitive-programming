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
//#define c_b fflush(stdin);

int dx[ ] = { 0 , 0 , -1 , 1 , 1 , -1 , 1 , 1 } ;
int dy[ ] = { -1 , 1 , 0 , 0 , 1 , -1 ,-1 ,-1 } ;

void File_input( string pathIn ){
    freopen( pathIn.c_str() , "r", stdin ) ;
}

void File_output( string pathOut ){
    freopen( pathOut.c_str() , "w", stdout ) ;
}

int msg(){
    srand( time( 0 ) ) ;
    vector < string > st = {
            "Wish everyone high ratings!",
            "Good luck!",
            "Have fun!",
            "Please, read all the problems!",
            "Go Go fight!" } ;
    cerr << st[ rand() % sz( st ) ] ;
    return 0 ;
}

void FastInputOutput() {
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
}

vector < char > b_names;
int n ;
string str ;
int a[ 'z' + 1 ] , b[ 'z' + 1 ] ;

int main(){

  cin >> n ;
  for( int i = 0 ; i < n ; i++ ){
     cin >> str ;
     b_names.pb( str.front() );
  }

    sort( all( b_names ) ) ;

  bool tog = 0 ;
  for( int i = 0 ; i < n ; i++ ){
     if( !tog ){
        a[ b_names[ i ] ]++ ;
        tog = 1 ;
     } else {
        b[ b_names[ i ] ]++ ;
        tog = 0 ;
     }
  }



  int cnt = 0 ;
  for( char c = 'a' ; c <= 'z' ; c++ ){
    if( a[ c ] )
        cnt += a[ c ] * ( a[ c ] - 1 ) / 2 ;
    if( b[ c ] )
        cnt += b[ c ] * ( b[ c ] - 1 ) / 2 ;
  }

  cout << cnt ;




   return 0;
}
