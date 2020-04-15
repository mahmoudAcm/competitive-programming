/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int n, h, l, r ;
vector<int> a ;

bool valid(int sum){
return sum >= l && sum <= r ;
}

const int N = 2e3 + 5 ;
int mem[N][N] ;

int solve(int i, int sum){
if(i == n) return 0 ;
int & ret = mem[i][sum] ;
if(~ret) return ret ;
ret = 0 ;
int s1 = sum + a[i] - 1 ;
s1 %= h ;
int s2 = sum + a[i] ;
s2 %= h ;
return ret = max(valid(s1) + solve(i + 1, s1), valid(s2) + solve(i + 1, s2)) ;
}

int main() {
//  freopen("out.txt", "w", stdout) ;

    cin >> n >> h >> l >> r ;
    a.resize(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }

    memset(mem, -1, sizeof mem);
    cout << solve(0, 0) ;

}

/*
  Empty set of troubles.
*/
