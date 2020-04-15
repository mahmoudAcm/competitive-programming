#include<bits/stdc++.h>

using namespace std ;

#define dbg(v) cerr << #v << " " << v ;

int n, k;
const int N = 1e5 + 6 ;
int mt[N] ;
long long mx = 1ll << 60 ;
//
//long long sm(long long l, long long r){
//return ((r * (r+1)/2) - (l * (l+1)/2)) + 1 ;
//}

vector<long long> sum(N) ;
bool can(long long mid){
//bool is = 0 ;
//for(int i = 1 ; i <= n - mid + 1 ; i++){
//    if( (mt[i+mid-1] - mt[i-1]) + sm(i, mid+i-1) * mid <= k ){
//        //mx = min(mx, (mt[i+mid-1] - mt[i-1]) + sm(i, mid+i-1) * mid);
//        is = 1 ;
//    }
//}
//if(is) return 1 ;

for(int i = 1 ; i <= n ; i++){
    sum[i-1] = mt[i] + (i * mid) ;
}


sort(sum.begin(), sum.begin() + n) ;
//
//cout << "test\n" ;
//for(int i = 1 ; i <= n ; i++){
//    cout << sum[i] << " " ;
//}
//cout << "\n" ;
long long s = 0 ;
for(int i = 0 ; i < mid ; i++){
    s += sum[i] ;
}
if(s <= k){
    mx = s ;
    return 1 ;
}
return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k ;
    for(int i = 1 ; i <= n ; i++){
        cin >> mt[i] ;
//        mt[i] += mt[i-1] ;
    }

    long long l = 0, r = n , mid ;
    while(l<r){
        mid = (l+r+1)/2;
        if(can(mid)){
          l = mid ;
        } else {
          r = mid - 1;
        }
    }



//    for(int i = 1 ; i <= n - l + 1 ; i++){
//        if( (mt[i+l-1] - mt[i-1]) + sm(i, l+i-1) * l <= k ){
//            mx = min(mx, (mt[i+l-1] - mt[i-1]) + sm(i, l+i-1) * l);
//            //is = 1 ;
//        }
//    }
    if(mx == (1ll << 60)) mx = 0 ;
    cout << l << " " << mx << "\n" ;




}
