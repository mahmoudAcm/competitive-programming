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

const int N = 1e6 ;
int a[ N ] ;

int main(){
    fast
    int n , mx = 0 , idx = 0 ;
    cin >> n ;
    for( int i = 0 ; i < n ; ++i ){
        cin >> a[ i ] ;
        if( a[ i ] > mx){
            mx = a [ i ] ;
            idx = i ;
        }
    }

    bool f = 1 ;
    int l = a[ idx ] , r = a[ idx ] ;
    for(int i = idx - 1 ; i >= 0 ; --i){
        if( a[ i ] >= l){
            f = 0;
            break;
        }
        l=a[i];
    }
    for( int j = idx + 1 ; j < n ; ++j ){
        if(a[ j ] >= r ){
            f = 0;
            break;
        }
        r = a[ j ];
    }

    if( f )
        puts("YES");
    else
        puts("NO");


    return 0;
}
