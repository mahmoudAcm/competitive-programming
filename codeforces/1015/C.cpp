/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

struct hibda{
int a, b ;
bool operator < (const hibda & s) const{
  return s.a - s.b > a - b ;
}
};

int main() {
//  freopen("out.txt", "w", stdout) ;

    int n, k ;
    cin >> n >> k ;
    ll sum = 0 ;
    vector<hibda> a(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i].a >> a[i].b ;
        sum += a[i].b ;
    }

    ll rem = k - sum ;
    sort(a.begin(), a.end()) ;

    if(sum > k){
        cout << "-1\n" ;
        return 0 ;
    }

    int cn = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(rem - (a[i].a - a[i].b) >= 0){
            rem -= (a[i].a - a[i].b) ;
            cn++ ;
        }
    }


    cout << n - cn ;


}

/*
  Empty set of troubles.
*/
