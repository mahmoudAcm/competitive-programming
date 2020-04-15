#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

vector<int> a;

bool cmp(int s, int f){
 if((s + 1) % 2 == 0 && a[f] > a[s]) return 1;
 return 0 ;
}

int main() {

   int n;
   cin >> n ;
   a.resize(n) ;
   vector<int> idx(n), ans(n) ;
   for(int i = 0 ; i < n ; i++){
     cin >> a[i] ;
     idx[i] = i ;
   }

   sort(a.rbegin(), a.rend());
   for(int i = 0 ; i < n ; i += 2){
      ans[i] = a.back() ;
      a.pop_back();
   }

   sort(a.begin(), a.end()) ;
   for(int i = 1 ; i < n ; i += 2){
      ans[i] = a.back() ;
      a.pop_back();
   }


   for(auto i: ans){
    cout << i << " " ;
   }

}

/*
 Empty set of troubles.
*/
