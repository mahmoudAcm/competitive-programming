#include <bits/stdc++.h>
 
using namespace std;
 
#define sz(v) v.size()
#define ll long long
#define all(v)  v.begin() , v.end()
#define pf push_front
#define pb push_back
 
 
void File_input(){
freopen( "input.txt" , "r" , stdin ) ;
freopen( "output.txt" , "w" , stdout ) ;
}
 
void FastInputOutput(){
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
}
 
inline ll readLong( bool t = 0 ){
ll tmp ;
if( !t ){
cin >> tmp ;
return tmp ;
}
scanf("%lld" , &tmp ) ;
return tmp ;
}
 
inline int readInt( bool t = 0 ){
int tmp ;
if( !t ){
cin >> tmp ;
return tmp ;
}
scanf("%d" , &tmp ) ;
return tmp ;
}
 
int main(){
    map < short , bool > vst ;
    int n , m , k  , v = 0 ;
    n = readInt( 1 ) ;
    deque < int > a , b ;
    m = readInt( 1 ) ;
    for( int i = 0 ; i < m ; i++ )
        a.pb( readInt( 1 ) ) ;
 
    k = readInt( 1 ) ;
 
    for( int i = 0 ; i < k ; i++ )
        b.pb( readInt( 1 ) ) ;
 
 
    int cnt = 0 ;
    while( !(b.empty()) && !(a.empty()) ){
        int c , d ;
        if( a.front() > b.front() ){
            c = a.front() ;
            d = b.front() ;
 
            a.pop_front() ;
            b.pop_front() ;
 
            a.pb( d ) ;
            a.pb( c ) ;
        }else{
            c = a.front() ;
            d = b.front() ;
 
            a.pop_front() ;
            b.pop_front() ;
 
            b.pb( c );
            b.pb( d );
 
        }
 
        cnt++;
 
        if( vst[ a.front() ]  == 0 && vst[ b.front() ] == 0 && v < 3000 ){
            vst[ a.front() ]  = 1 , vst[ b.front() ] = 1 ;
            v++;
        }
        else{
            return puts("-1") ;
        }
 
        vst.clear() ;
 
    }
 
 
   if( a.size() > b.size() )
     printf("%d 1" , cnt );
   else
     printf("%d 2" , cnt );
 
 
return 0 ;
}
