/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

struct intr{
   int x, y ;
   bool operator < (const intr & s) const{
      if(s.x != x) return s.x > x;
      return s.y > y ;
   }
};

int n, x, y ;

int main() {
//  freopen("in.txt", "r", stdin) ;
    cin >> n ;
    vector<intr> a(n), l(n + 2), r(n + 2) ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i].x >> a[i].y ;
    }

    sort(a.begin(), a.end()) ;

    l[0] = a.front() ;
    for(int i = 1 ; i < n ; i++){
       l[i].x = max(l[i - 1].x, a[i].x) ;
       l[i].y = min(l[i - 1].y, a[i].y) ;
    }

    r[n - 1] = a.back() ;
    for(int i = n - 2 ; i >= 0 ; i--){
       r[i].x = max(r[i + 1].x, a[i].x) ;
       r[i].y = min(r[i + 1].y, a[i].y) ;
    }

    int mx = 0;
    x = r[1].x ;
    y = r[1].y ;
    mx = max(y - x, mx) ;
    x = l[n - 2].x ;
    y = l[n - 2].y ;
    mx = max(y - x, mx) ;
    for(int i = 1 ; i < n ; i++){
        int x, y ;
        x = max(l[i - 1].x, r[i + 1].x) ;
        y = min(l[i - 1].y, r[i + 1].y) ;
        mx = max(y - x, mx) ;
    }

    cout << mx ;



}


/*
   Empty set of troubles.
*/
