/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int n, m ;
const int N = 2000 ;
char a[N][N];
int call[N][N], rowc[N][N], colc[N][N], rowcc[N][N], colcc[N][N] ;

struct an{
int a, b, c ;
bool operator < (const an & s) const{
  if(s.a != a) return s.a > a;
  if(s.b != b) return s.b > b;
  if(s.c != c) return s.c > c;
  return 0 ;
}
};

bool can(int mn, int i, int j){
   int r1 = rowc[i - 1][j] - rowc[i - mn - 1][j] ;
   int r2 = rowc[i + mn][j] - rowc[i][j] ;

   int r3 = colc[i][j - 1] - colc[i][j - mn - 1] ;
   int r4 = colc[i][j + mn] - colc[i][j] ;

//   cout << r1 <<  " " << r2 << " " << r3 << " " << r4 << "\n" ;

   int m = min(r1, min(r2, min(r3, r4))) ;
   if(m == mn) return 1 ;

   return 0 ;
}

int main() {
//  freopen("out.txt", "w", stdout) ;

    cin >> n >> m ;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            cin >> a[i][j] ;
        }
    }

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            colc[i][j] = a[i][j] == '*' ;
        }


        for(int j = 1 ; j <= m ; j++){
            colc[i][j] += colc[i][j - 1] ;
        }
    }


    for(int j = 1 ; j <= m ; j++){
        for(int i = 1 ; i <= n ; i++){
            rowc[i][j] = a[i][j] == '*' ;
        }


        for(int i = 1 ; i <= n ; i++){
            rowc[i][j] += rowc[i - 1][j] ;
        }
    }



    set<an> vec ;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m; j++){
            if(a[i][j] == '*'){

              int l = 0, r = min(n, m), mn = 0 ;
              while(l < r){
                int mid = (l + r) / 2 ;
                if(can(mid, i, j)){
                    l = mid + 1 ;
                    mn = mid ;
//                    cout << mn << "\n" ;
                } else r = mid;
              }

              if(!mn) continue ;

              rowcc[i - mn][j] += 1 ;
              rowcc[i + 1 + mn][j]  -= 1 ;

              colcc[i][j - mn] += 1 ;
              colcc[i][j + 1 + mn] -= 1 ;

              vec.insert({i, j, mn}) ;
            }
        }
    }



    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            colcc[i][j] += colcc[i][j - 1] ;
        }
    }


    for(int j = 1 ; j <= m ; j++){
        for(int i = 1 ; i <= n ; i++){
            rowcc[i][j] += rowcc[i-1][j] ;
        }
    }

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            if(a[i][j] == '*' && !(rowcc[i][j] + colcc[i][j])){
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
