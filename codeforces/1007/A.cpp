#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int main() {

   ios_base :: sync_with_stdio(0) ;
   cin.tie(0) ;
   cout.tie(0) ;

   int n ;
   cin >> n ;
   multiset<int> q ;
   vector<int> a(n);
   for(int i = 0 ; i < n ; i++){
       cin >> a[i] ;
       q.insert(a[i]) ;
   }

   sort(a.begin(), a.end()) ;
   int cnt = 0 ;
   for(int i = 0 ; i < n ; i++){
      auto it = q.upper_bound(a[i]) ;
      if(q.count(*it) && *it > a[i]){
         q.erase(q.find(*it)) ;
         cnt++;
      } else break;
   }

   cout << cnt << "\n" ;




   return 0;
}


/*
 Empty set of troubles.
*/
