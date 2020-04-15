#include<bits/stdc++.h>

using namespace std ;

#define dbg(v) cerr << #v << " " << v ;
typedef long long ll;

int main() {

    int n, a, b ;
    cin >> n ;
    while(n--){
        cin >> a >> b ;
        cout << abs(1500 - (a * 60 + b) - 60) << "\n" ;
    }

}
