/******++++
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;


int n, m ;
vector<int> a ;
const int N = 2e5 + 5;
vector<int> arr[N] ;

int main() {
   ios_base :: sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0) ;

   cin >> n >> m ;
   a.resize(n) ;
   for(int i = 0 ; i < n ; i++) {
     cin >> a[i] ;
     arr[a[i] % m].push_back(i) ;
   }

   ll ans = 0;
   int k = n / m ;
   vector<int> free ;
   for(int i = 0 ; i < 2 * m ; i++){
    int cur = i % m ;
    while(arr[cur].size() > k){
        free.push_back(arr[cur].back()) ;
        arr[cur].pop_back() ;
    }

    while(arr[cur].size() < k && free.size()){
         int el = free.back() ;
         int mod = a[el] % m ;
         free.pop_back() ;
         ans += i - mod ;
         a[el] += i - mod ;
         arr[cur].push_back(el);
    }

   }

   cout << ans << "\n" ;
   for(int i = 0 ; i < n ; i++) cout << a[i] << " " ;

}




/*
  Empty set of troubles.
*/
