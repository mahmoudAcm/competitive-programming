#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int main() {

    bool ok = 0 ;
    int n ;
    cin >> n ;
    vector<string> st(n) ;
    for(int i = 0 ; i < n ; i++) cin >> st[i] ;

    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(st[i].find(st[j]) != string :: npos){
                swap(st[i], st[j]) ;
            }
        }
    }

    for(int i = 1 ; i < n ; i++){
        if(st[i].find(st[i-1]) == string :: npos){
            ok = 1 ;
            break ;
        }
    }

    if(ok){
        cout << "NO\n" ;
        return 0 ;
    }

    cout << "YES\n" ;
    for(auto i: st) cout << i << "\n" ;



}

/*
 Empty set of troubles.
*/
