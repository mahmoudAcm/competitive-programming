#include<bits/stdc++.h>

using namespace std ;

#define dbg(v) cerr << #v << " " << v ;
typedef long long ll;

int main() {

    int n ;
    cin >> n ;
    if(n % 2 == 0){
        cout << -1;
        return 0 ;
    }

    for(int i = 0 ; i < n ; i++){
        cout << i << " " ;
    }

    cout << "\n" ;
    for(int i = 0 ; i < n ; i++){
        cout << i << " " ;
    }

    cout << "\n" ;
    for(int i = 0 ; i < n ; i++){
        cout << (i + i) % n << " " ;
    }

}

//quor
/*
    coding is so funny when you are good at it.
    smaller number -> fewer bits
    so why wating go for it
    oh no !!
*/
