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

string str ;
int grid[ 11 ][ 11 ][ 11 ][ 11 ] ;

int main(){

 forn( int , i , 0 , 10 ){
   forn( int , j , 0 , 10 ){
     forn( int , k , 0 , 10 ){
        forn( int , c , 0 , 10 ){
            grid[ i ][ j ][ k ][ c ] = Int_max ;
        }
     }
   }
 }

 fast
 cin >> str ;

 forn( int , i , 0 , 10 ){
    forn( int , j , 0 , 10 ){
       vector < int > Cur ;
        {
             queue < ll > q ;
             q.push( { 0 } ) ;
             unordered_map < int , bool > vis ;
             while( sz( q ) ){
                ll cur = q.front() ;
                Cur.pb( cur ) ;
                q.pop() ;
                if( !vis[ ( cur + i ) % 10 ] ){
                    q.push( { cur + i } ) ;
                    vis[ ( cur + i ) % 10 ] = 1 ;
                }

                if( !vis[ ( cur + j ) % 10 ] ){
                    q.push( { cur + j } ) ;
                    vis[ ( cur + j ) % 10 ] = 1 ;
                }
             }

        }
       fore( cur_pos , Cur ){
           unordered_map < ll , bool > vit ;
           queue < pair < int , int > > q ;
           q.push( { cur_pos , 0 } ) ;
           grid[ i ][ j ][ cur_pos ][ cur_pos ] = 0 ;
           while( sz( q ) ){
              ll cur = q.front().first ;
              int dp = q.front().second ;
              q.pop() ;
              if( !vit[ ( cur + i ) % 10 ] ){
                q.push( { cur + i , dp + 1 } ) ;
                grid[ i ][ j ][ cur_pos % 10 ][ ( cur + i ) % 10 ] = dp + 1 ;
                vit[ ( cur + i ) % 10 ] = 1 ;
              }

              if( !vit[ ( cur + j ) % 10 ] ){
                q.push( { cur + j , dp + 1 } ) ;
                grid[ i ][ j ][ cur_pos % 10 ][ ( cur + j ) % 10 ] = dp + 1 ;
                vit[ ( cur + j ) % 10 ] = 1 ;
              }
           }
       }
    }
 }



 forn( int , i , 0 , 10 ){
  forn( int , j , 0 , 10 ){
     int ans = 0 ;
     forn( int , k , 0 , sz( str ) - 1 ){
         if( grid[ i ][ j ][ str[ k ] - '0' ][ str[ k + 1 ] - '0' ] == Int_max ){
            ans = -1;
            break ;
         }
         ans += grid[ i ][ j ][ str[ k ] - '0' ][ str[ k + 1 ] - '0' ] ;
     }

  ans -= ( sz( str ) - 1 ) ;
  if( ans < 0 ) ans = -1 ;
   cout << ans << " " ;
  }

  cout << "\n" ;

 }


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
DFS , BFS , DSU
bit mask
number theory , math
meet in the middle
focus on the problem and constraints.
*/

