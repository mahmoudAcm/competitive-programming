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

string str ;
int n ;

int main(){

    cin >> n ;
    while( n-- ){
        cin >> str ;
        char a = str.front() ;
        bool fo = 0 , is = 0 ;
        int l = 0 , r = sz( str ) - 1 ;
        while( l <= r ){
            if( str[ l ] != str[ r ] ){
                is = 1 ;
                break ;
            }
            l++ ;
            r-- ;
        }


            for( int i = 1 ; i < sz( str ) && !is ; i++  ){
                if( str[ i ] != a ){
                    swap( str[ i ] , str[ 0 ] ) ;
                    fo = 1 ;
                    break;
                }
            }

        if( is ){
            cout << str << "\n" ;
        }
        else if( !fo ){
            cout << "-1\n" ;
        } else cout << str << "\n" ;

    }

   return 0;
}
