/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int main() {
//  freopen("out.txt", "w", stdout) ;

    string a, b ;
    cin >> a >> b ;

    while(a.size() && b.size() && a.back() == b.back()){
        a.pop_back() ;
        b.pop_back() ;
    }


    cout << a.size() + b.size() << "\n" ;









}

/*
  Empty set of troubles.
*/
