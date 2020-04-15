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
#define debug(x) cerr << #x << " = " << x << "\n" ;

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

int n , k ;
queue < int > q ;
unordered_map < int , int > mp ;

int main(){
 fast
 cin >> n >> k ;
 forn( int , i , 0 , 31 ){
   if( n & ( 1 << i ) ){
      if( i > 0 ) q.push( 1 << i ) ;
      mp[ 1 << i ]++ ;
   }
 }
 if( sz( mp ) > k ){
    cout << "NO\n" ;
    return 0 ;
 }

 int cnt = sz( mp ) ;
 while( cnt < k && sz( q ) ){
    int c = q.front() ;
    q.pop() ;
    mp[ c ]-- ;
    mp[ c / 2 ] += 2 ;
    if( c / 2 > 1 ){
        q.push( c / 2 ) ;
        q.push( c / 2 ) ;
    }
    cnt++ ;
 }

 if( cnt < k ){
    cout << "NO" ;
    return 0 ;
 }

 cout << "YES\n" ;
 fore( i , mp ){
   forn( int , j , 0 , i.second ){
     cout << i.first << " " ;
   }
 }

 return 0 ;
}