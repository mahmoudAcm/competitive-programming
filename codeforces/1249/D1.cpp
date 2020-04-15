#include<bits/stdc++.h>

using namespace std ;

typedef long long ll ;

int t, n ;
struct seg{
int x, y, i ;
bool operator < (const seg & f) const{
 if(x == f.x && y == f.y) return 1 ;
 if(y != f.y) return f.y > y ;
 return f.x > x ;
}
};


int x, y ;
const int N = 400 ;
int cim[N] ;

int main() {

    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cout.tie(0) ;

    cin >> n >> t;
    set<seg> a ;
    for(int i = 0 ; i < n ; i++){
        cin >> x >> y ;
        a.insert({x, y, i + 1}) ;
    }

    vector<seg> b ;
    for(auto u : a) b.push_back(u) ;

    vector<int> ans ;

    for(int i = 0 ; i < n ; i++){
        x = b[i].x , y = b[i].y ;
        for(int j = x ; j <= y ; j++){
            cim[j]++ ;
            if(cim[j] > t ){
                for(int k = x ; k <= j ; k++){
                    cim[k]--;
                }
                ans.push_back(b[i].i) ;
                break ;
            }
        }
    }

    cout << ans.size() << "\n" ;
    for(int i = 0 ; i < ans.size() ; i++){
        cout << ans[i] << " " ;
    }


}
