/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

string s ;
int n, l, r, as = -1;
const int N = 2e5 + 5 ;
int pre[N], cn ;

bool can(int k){
int mn = l, mx = (l + k) - 1 ;
//cout << mn << " " << mx << "\n" ;
while(mx <= r){
    if((pre[mx] - pre[mn - 1]) % 3 == 0){
        as = mx ;
        return 1 ;
    }
    mx++;
    mn++;
}
return 0 ;
}

int main() {
//  freopen("out.txt", "w", stdout) ;

    cin >> s ;
    n = s.size() ;
    s = " " + s ;
    for(int i = 1 ; i <= n ; i++){
        pre[i] = pre[i-1] + (s[i] - '0') ;
//        cout << pre[i] << " " ;
    }


//    cout << "\n" ;


    l = r = 1 ;
    while(r <= n){
        int mn = 1, mx = r - l + 1 ;
        int ans = 0 ;

        for(int i = 1 ; i <= 3 ; i++){
            if(can(i)){
                break;
            }
        }

        if(as != -1){
//            cout << "Yup\n" ;
            l = as + 1;
            r = l ;
            as = -1;
//            cout << mx << " Yup\n" ;
            cn++ ;
        } else {
            r++;
        }
    }

    cout << cn ;


}

/*
  Empty set of troubles.
*/
