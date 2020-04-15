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
int n, b ;
unordered_map<int, int> mp ;
cin >> n ;
for(int i = 0 ; i < n ; i++){
    cin >> b ;
    mp[b]++ ;
}


int mx = 0 ;
for(auto i: mp){
    mx = max(i.second, mx) ;
}

cout << mx ;

}


/*
  Empty set of troubles.
*/
