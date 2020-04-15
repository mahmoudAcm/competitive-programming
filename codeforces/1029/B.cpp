/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int n;
vector<int> a ;
unordered_map<int, int> pos ;

int low(int v, int be){
int l = 0, r = n - 1 ;
int ans = 0 ;
while(l < r){
    int mid = (l + r) / 2 ;
    if(a[mid] > v) r = mid ;
    else{
        l = mid + 1 ;
        ans = mid ;
    }
}

if(a[l] > v) l = ans ;

return pos[a[l]] - be + 1 ;

}

int main() {
//    freopen("in.txt", "r", stdin) ;

    cin >> n ;
    a.resize(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
        pos[a[i]] = i + 1 ;
    }

    int mx = 1 ;
    int cnt = 1 ;
    for(int i = 0 ; i < n - 1; i++){
        if(a[i + 1] <= 2 * a[i]){
            cnt++;
            mx = max(mx, cnt) ;
        } else cnt = 1 ;
        mx = max(mx, cnt) ;
    }

    cout << mx ;
}

 /*
  Empty set of troubles.
*/
