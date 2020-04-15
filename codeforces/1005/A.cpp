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

    int n ;
    cin >> n ;
    vector<int> a(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }


    vector<int> b ;
    for(int i = 0 ; i < n ; i++){
        if(a[i]){
            i++ ;
            while(i < n && a[i] != 1){
                i++ ;
            }

            i-- ;
            if(i < n && a[i] != 1){
              b.push_back(a[i]) ;
            } else b.push_back(1) ;
        }
    }

    cout << b.size() << "\n" ;
    for(auto i: b){
        cout << i << " " ;
    }

}

/*
  Empty set of troubles.
*/
