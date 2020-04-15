/******
author :- Mahmoud Tarek.
*******/

#include <bits/stdc++.h>

using namespace std;

#define rg register
#define dbg(v) cerr << #v << " " << v;
typedef long long ll;

int main(){
  //freopen("in.txt", "r", stdin);
  int t, n, a, b;
  cin >> t ;

  while(t--){
    cin >> n >> a >> b ;
    int idx = 0 ;
    for(int i = 0 ; i < n ; i++){
        cout << char('a' + idx) ;
        idx += 1 ;
        idx %= b ;
    }
    cout << "\n" ;
  }


}

/*
  Empty set of troubles.
*/
