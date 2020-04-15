#include<bits/stdc++.h>

using namespace std ;

#define dbg(v) cerr << #v << " " << v ;
int n, k;
const int N = 2e5 + 5 ;
long long cum[N], idx[N], tmp[N], l[N], r[N] ;

bool cmp(int s, int f){
if(cum[s] > cum[f]) return 1 ;
return 0 ;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin >> n >> k ;
    vector<int> a(n+1) ;
    for(int i = 1 ; i <= n ; i++) cin >> a[i], idx[i] = i ;
    for(int i = 0 ; i < k ; i++){
        cin >> l[i] >> r[i] ;
        cum[r[i]+1]-- ;
        cum[l[i]]++ ;
    }

    for(int i = 1 ; i <= n ; i++) cum[i] += cum[i-1] ;

    sort(a.begin()+1, a.begin()+n+1);

    sort(idx+1, idx + n+1, cmp);

    for(int i = 1 ; i <= n ; i++){
        tmp[idx[i]] = a.back() ;
        a.pop_back() ;
    }

    for(int i = 1 ; i <= n ; i++) tmp[i] += tmp[i-1];

    long long sm = 0 ;
    for(int i = 0 ; i < k ; i++) sm += tmp[r[i]] - tmp[l[i]-1] ;
    cout << sm ;




}
