#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll;

int t, n, x, y ;

bool cmp(pair<int, int> s, pair<int, int> f){
  if(f.second != s.second) return f.second > s.second ;
  return f.first > s.first ;
}

int main() {
    cin >> t ;
    while(t--){
        cin >> n ;
        vector<pair<int, int>> p ;
        for(int i = 0 ; i < n ; i++){
            cin >> x >> y ;
            p.push_back({x, y}) ;
        }

        sort(p.begin(), p.end(), cmp) ;

        int curX, curY ;
        curX = curY = 0 ;

        bool can = 0 ;
        for(auto i: p){
            if(curX <= i.first){
            curX = i.first ;
                continue ;
            } else{
                can = 1 ;
                break ;
            }
        }

        if(can){
            cout << "NO\n" ;
            continue ;
        }

        curX = 0 ;
        cout << "YES\n" ;
        for(auto i: p){
            for(int c = 0 ; c < abs(curX - i.first) ; c++){
                cout << "R" ;
            }

            for(int c = 0 ; c < abs(curY - i.second) ; c++){
                cout << "U" ;
            }
            curX = i.first ;
            curY = i.second ;
        }
        cout << "\n" ;

    }
}

/*
 Empty set of troubles.
*/
