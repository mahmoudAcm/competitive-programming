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
#define debug(x , y) cerr << #x << " = " << x << y ;
 
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
string x , y ;
 
int main(){
 fast
 cin >> n ;
 while( n-- ){
    cin >> x >> y ;
    if( sz( x ) > sz( y ) ){
        string ans = "" ;
        forn( int , i , 0 , sz( x ) - sz( y ) ){
           ans += "0" ;
        }
        y = ans + y ;
    } else if( sz( y ) > sz( x ) ){
        string ans = "" ;
        forn( int , i , 0 , sz( y ) - sz( x ) ){
           ans += "0" ;
        }
        x = ans + x ;
    }
 
    int a , b ;
    a = b = 0 ;
    bool t = 0 , c = 0 ;
 
    for( int i = sz( x ) - 1 ; i >= 0 ; i-- ){
        if( y[ i ] == '1' && !c ) b = i , c = 1 ;
        if( c && x[ i ] == '1' ){
            a = i ;
            break;
        }
    }
 
    cout << abs( a - b ) << "\n" ;
 
 }
 return 0 ;
}
 
 
/*
A B C D
try to solve A , B in 30 min as possible
If their is subtask try to solve the second one first if the constraints are only differ
Read all Problem so you could find an ex that you can solve fast
A -- don't wright big code focus again
B -- greedy , math , bit mask , tricks , DP
C -- solve A , B first then solve C but fast as possible
greedy
DP
binary search
DFS , BFS , DSU
bit mask
number theory , math
meet in the middle
focus on the problem and constraints.
*/
 