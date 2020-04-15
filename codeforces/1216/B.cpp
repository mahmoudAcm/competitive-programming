#include<bits/stdc++.h>
using namespace std ;
   vector<int>a ;
   vector<int>idx ;

bool cmp( int s, int f ){
if(a[s] > a[f]) return 1;
return 0 ;
}

int main(){
   ios_base :: sync_with_stdio( 0 ) ;
   cin.tie( 0 ) ;
   cout.tie( 0 ) ;

   int n ;
   cin >> n ;
   a.resize(n);
   idx.resize(n);
   for( int i = 0 ; i < n ; i++ ){
      idx[i] = i ;
      cin >> a[i] ;
   }

   sort(idx.begin(), idx.end(), cmp);
   int cn = 0;
   for( int i = 0 ; i < n ; i++ ){
      cn += i * a[idx[i]] + 1;
   }

   cout << cn << "\n" ;
   for( int i = 0 ; i < n ; i++ ){
     cout << idx[i] + 1 << " " ;
   }

}
