/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int t, n ;
string s ;

int main() {
//  freopen("in.txt", "r", stdin) ;
    cin >> t ;
    while(t--){
        cin >> n >> s ;
        bool c = 0 ;
        string a, b ;
        a = b = "1" ;
        for(int i = 1 ; i < n ; i++){
            if(c){
                a += s[i] ;
                b += "0" ;
            } else {
              if(s[i] == '1'){
                c = 1 ;
                a += "0" ;
                b += "1" ;
              } else if(s[i] == '2'){
                a += "1" ;
                b += "1" ;
              } else {
                a += "0" ;
                b += "0" ;
              }
            }
        }
        cout << a << "\n" << b << "\n" ;
    }
}


/*
  Empty set of troubles.
*/
