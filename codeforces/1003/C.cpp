/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int n, k ;
double mx ;

int main() {
//  freopen("out.txt", "w", stdout) ;

    ios_base :: sync_with_stdio(0) ;
    cin.tie(0) ;
    cout.tie(0) ;

    cin >> n >> k ;
    vector<int> a(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }

    for(int i = k ; i <= n ; i++){
        int l = 0, r = i - 1 ;
        int sum = 0 ;
        for(int j = l ; j <= r ; j++) sum += a[j] ;

        mx = max(mx, double(sum) / i) ;

        r++ ;
        while(r < n){
            sum -= a[l] ;
            sum += a[r] ;
            mx = max(mx, double(sum) / i) ;
            l++;
            r++;
        }
    }

    cout << fixed << setprecision(12) << mx ;

}

/*
  Empty set of troubles.
*/
