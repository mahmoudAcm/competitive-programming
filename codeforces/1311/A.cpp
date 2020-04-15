/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int main() {

   int t, a, b ;
   cin >> t ;
   while(t--){
    cin >> a >> b ;
    if(a == b){
        cout << "0\n" ;
    } else {
        if(a < b){
           cout << 1 + ((b - a) % 2 == 0) << "\n" ;
        } else{
           cout << 1 + ((a - b) % 2) << "\n" ;
        }
    }
   }


}

/*
  Empty set of troubles.
*/
