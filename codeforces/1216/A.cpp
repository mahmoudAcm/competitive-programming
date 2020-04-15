#include<bits/stdc++.h>
using namespace std ;


int main(){
   ios_base :: sync_with_stdio( 0 ) ;
   cin.tie( 0 ) ;
   cout.tie( 0 ) ;

   int n ;
   string st ;
   cin >> n >> st ;
   int cn , a , b ;
   cn = a = b = 0 ;

   for( int i = 1 ; i <= n ; i++ ){
      a += st[i-1] == 'a' ;
      b += st[i-1] == 'b' ;
      if( i % 2 == 0 && a != b ){
        if( b > a ){
          for( int j = i - 1 ; j >= 0 ; j-- ){
            if( st[j] == 'b' ){
                st[j] = 'a' ;
                a++;
                b--;
                cn++;
                break;
            }
          }
        } else if( b < a ){
          for( int j = i - 1 ; j >= 0 ; j-- ){
            if( st[j] == 'a' ){
                st[j] = 'b' ;
                a--;
                b++;
                cn++;
                break;
            }
          }
        }
      }
   }

   cout << cn << "\n" ;
   cout << st << "\n" ;

}
