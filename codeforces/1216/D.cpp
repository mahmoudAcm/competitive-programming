#include<bits/stdc++.h>
using namespace std ;

int n ;
vector<int>a;
const int N = 1e6 ;
int prime[N] ;
vector<int>p;

int main(){
   ios_base :: sync_with_stdio( 0 ) ;
   cin.tie( 0 ) ;
   cout.tie( 0 ) ;

   prime[1] = prime[0] = 1 ;
   for( long long i = 2 ; i < N ; i++ ){
      if( prime[i] ){
        continue ;
      }
      p.push_back(i);
      for( long long j = i * i ; j < N ; j += i ){
        prime[j] = 1;
      }
   }


   cin >> n ;
   a.resize(n);
   for( int i = 0 ; i < n ; i++ ){
     cin >> a[i] ;
   }

   int mx = *max_element( a.begin() , a.end() ) ;
   int mn = 1e9 ;
   long long sum = 0 ;
   for( int i = 0 ; i < n ; i++ ){
      sum += mx - a[i] ;
   }

   int gcd = 0 ;
   for( int i = 0 ; i < n ; i++ ){
      gcd = __gcd( mx - a[i] , gcd ) ;
   }

   cout << sum / gcd << " " << gcd ;



}
