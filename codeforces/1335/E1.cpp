/******
author :- Mahmoud Tarek.
*******/

#include <bits/stdc++.h>

using namespace std;

#define rg register
#define dbg(v) cerr << #v << " " << v;
typedef long long ll;

int t, n, v ;
vector<int> a ;
const int N = 3e3 + 5 ;
int dp[N][28] ;

int main(){
  //freopen("in.txt", "r", stdin);
    ios_base :: sync_with_stdio(0) ;
    cin.tie(0) ;
    cout.tie(0) ;
    cin >> t ;
    while(t--){
        cin >> n ;
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= 26 ; j++){
                dp[i][j] = 0 ;
            }
        }

        for(int i = 1 ; i <= n ; i++){
            cin >> v ;
            dp[i][v] = 1 ;
        }

        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= 26 ; j++){
                dp[i][j] += dp[i - 1][j] ;
            }
        }

        int mx = 0;
        for(int i = 1 ; i <= 26 ; i++){
            mx = max(mx, dp[n][i]) ;
        }

        for(int len = 1 ; len <= n ; len++){
            int l = 1, r = len ;
            while(r < n){
                int mxa, mxb ;
                mxa = mxb = 0 ;
                for(int i = 1 ; i <= 26 ; i++){
                    mxa = max({mxa, min(dp[l - 1][i], dp[n][i] - dp[r][i]) * 2}) ;
                    mxb = max({mxb, dp[r][i] - dp[l - 1][i]});
                }

                mx = max({mx, mxa + mxb}) ;
                l++;
                r++;
            }
        }
        cout << mx << "\n" ;
    }

}

/*
  Empty set of troubles.
*/
