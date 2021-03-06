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

int n , a , b ;

int main(){

 cin >> n >> a >> b ;
 if( n <= a && n <= b ) cout << "Yes\n" ;
 else cout << "No\n" ;

 return 0 ;
}

/*
A B C D
try to solve A , B in 30 min as possible
If their is subtask try to solve the second one first if the constraints are only differ
Read all Problem so you could find an ex that you can solve fast
A -- don't write big code focus again
B -- greedy , math , bit mask , tricks , DP
C -- solve A , B first then solve C but fast as possible
greedy
DP
binary search
DFS , BFS , DSU( detect a cycle , make sets )
bit mask
number theory , math
meet in the middle
focus on the problem and constraints.
*/
