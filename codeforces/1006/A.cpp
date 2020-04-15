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

int n, v;
cin >> n ;
for(int i = 0 ; i < n ; i++){
    cin >> v ;
    if(v % 2 == 0) v--;
    cout << v << " " ;
}


}

/*
  Empty set of troubles.
*/
