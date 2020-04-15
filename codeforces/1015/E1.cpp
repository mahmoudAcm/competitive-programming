/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int n, m ;
const int N = 200 ;
char a[N][N], call[N][N] ;

struct an{
int a, b, c ;
bool operator < (const an & s) const{
  if(s.a != a) return s.a > a;
  if(s.b != b) return s.b > b;
  if(s.c != c) return s.c > c;
  return 0 ;
}
};

int main() {
//  freopen("out.txt", "w", stdout) ;

    cin >> n >> m ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j] ;
        }
    }

    set<an> vec ;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m; j++){
            if(a[i][j] == '*'){

                int q, w, e, r ;
                q = w = e = r = 0 ;

                //row up
                for(int k = i - 1; k >= 0 && a[k][j] == '*'; k--) q++;
                //row down
                for(int k = i + 1; k < n && a[k][j] == '*'; k++) w++;

                //col r
                for(int k = j + 1; k < m && a[i][k] == '*'; k++) e++;
                //col l
                for(int k = j - 1; k >= 0 && a[i][k] == '*'; k--) r++;

                int mn = min(q, min(w, min(e, r))) ;
                if(!mn) continue ;
                call[i][j]++ ;

                //row up
                for(int k = i - 1; k > i - 1 - mn && a[k][j] == '*'; k--){
                    call[k][j]++;
                }
                //row down
                for(int k = i + 1; k < i + 1 + mn && a[k][j] == '*'; k++){
                    call[k][j]++;
                }

                //col r
                for(int k = j + 1; k < j + 1 + mn && a[i][k] == '*'; k++){
                    call[i][k]++ ;
                }
                //col l
                for(int k = j - 1; k > j - 1 - mn && a[i][k] == '*'; k--){
                    call[i][k]++ ;
                }

                vec.insert({i + 1, j + 1, mn}) ;


            }
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(a[i][j] == '*' && !call[i][j]){
                return cout << "-1\n", 0 ;
            }
        }
    }


    if(vec.size() > n * m){
        cout << "-1\n" ;
        return 0 ;
    }

    cout << vec.size() << "\n" ;
    for(auto i: vec){
        cout << i.a << " " << i.b << " " << i.c << "\n" ;
    }

}

/*
  Empty set of troubles.
*/
