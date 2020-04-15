/******
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int n, v, z ;
vector<int> pos, neg ;

int bin(int vl){
int l = 0, r = neg.size() - 1 ;
while(l < r){
    int mid = (l + r + 1) / 2 ;
    if(neg[mid] < vl) l = mid ;
    else r = mid - 1 ;
}
return l ;
}

int main() {

//
//neg = {1, 2, 2, 2, 2, 2, 2, 2, 2} ;
//return cout << bin(2), 0 ;

//  freopen("out.txt", "w", stdout) ;
cin >> n ;
vector<int> a(n), b(n);
unordered_map<int, int> mp ;
for(int i = 0 ; i < n ; i++) cin >> a[i] ;
for(int i = 0 ; i < n ; i++) {
    cin >> v ;
    b[i] = v ;
    if(a[i] - v > 0) {
        pos.push_back(a[i] - v) ;
    }
    else if(a[i] - v < 0) {
            neg.push_back(-1* (a[i] - v)) ;
            mp[neg.back()]++ ;
    }
    else z++ ;
}



ll sum = pos.size() ;
ll k = sum * z ;

if(neg.size())
sort(neg.begin(), neg.end());

sum = (sum * (sum - 1) / 2) ;
sum += k ;

////time limit solution
//
//int cn = 0 ;
//for(int i = 0 ; i < n ; i++){
//    for(int j = i + 1; j < n ; j++){
//        if(a[i] + a[j] > b[i] + b[j]) cn++ ;
//    }
//}

for(int i = 0 ; i < pos.size() && neg.size() ; i++){
    int idx = bin(pos[i]);
    if(neg[idx] < pos[i]){
        idx++;
    }
    sum += idx ;
}

cout << sum ;

}

/*
  Empty set of troubles.
*/
