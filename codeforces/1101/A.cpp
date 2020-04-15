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
#define c_b fflush(stdin);

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


int q ;
ll l , r , d;
bool in( ll x , ll y , ll a ){
return a >= x && a <= y ;
}

int main(){

   cin >> q ;
   while( q-- ){
     cin >> l >> r >> d ;
     if( !in( l , r , d ) ){
         cout << d << "\n" ;
     } else cout << ( ( r / d ) + 1 ) * d << "\n" ;
   }

   return 0;
}
