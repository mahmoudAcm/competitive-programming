#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll;

int main() {

    int n ;
    cin >> n ;
    vector<pair<int, int>> p(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> p[i].first >> p[i].second ;
    }

    bool can = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(p[i].first != p[i].second) can = 1 ;
    }

    if(can){
        cout << "rated\n" ;
        return 0 ;
    }

    bool c = 0 ;
    for(int i = 1 ; i < n ; i++){
        if(p[i].first <= p[i-1].first){
            continue;
        }
        else c = 1 ;
    }

    if(c){
        cout << "unrated\n" ;
        return 0 ;
    }

    cout << "maybe\n" ;

}

/*
 Empty set of troubles.
*/
