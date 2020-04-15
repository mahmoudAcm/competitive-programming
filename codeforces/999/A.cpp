/******++++
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int main() {
//  freopen("out.txt", "w", stdout) ;

    int n, k ;
    cin >> n >> k ;
    deque<int> a(n) ;
    for(int i = 0 ; i < n; i++){
        cin >> a[i] ;
    }

    int cn = 0, i = 0;
    for(i = 0 ; a[i] <= k && i < n ; i++){
       cn++ ;
    }

    for(int j = n - 1 ; a[j] <= k && j >= i ; j--){
        cn++ ;
    }

    cout << cn ;

}

/*
  Empty set of troubles.
*/
