/******++++
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;


int n, k ;
vector<int> a, idx, can;

bool cmp(int s, int f){
return a[s] > a[f] ;
}

int main() {
//  freopen("out.txt", "w", stdout) ;

    cin >> n >> k  ;
    a.resize(n) ;
    idx.resize(n) ;
    can.resize(n) ;

    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
        idx[i] = i ;
    }

    sort(idx.begin(), idx.end(), cmp) ;

    int sum = 0 ;
    int be = 0 ;
    for(int i = 0 ; i < k ; i++){
          can[idx[i]] = 2 ;
          sum += a[idx[i]] ;
    }


    cout << sum << "\n" ;
    for(int i = 0 ; i < n ; i++){
        if(can[i] == 2){
            int l = i - 1, r = i + 1 ;
            int cnt = 1 ;
            while(l >= 0 && can[l] == 0){
                cnt++ ;
                can[l] = 1 ;
                l--;
            }

            while(r < n && can[r] == 0){
                can[r] = 1 ;
                cnt++ ;
                r++;
            }

            cout << cnt << " " ;
        }
    }

}



/*
  Empty set of troubles.
*/
