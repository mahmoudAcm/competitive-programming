#include<bits/stdc++.h>

using namespace std ;

int main(){
    ios_base :: sync_with_stdio(0) ;
    cin.tie(0) ;
    cout.tie(0) ;
    int a , b , c ;
    int sum = 0 ;
    cin >> a >> b >> c ;
    sum = a + b + c ;
    int x = max( max(a, b), c ) ;
    cout << max(0, x - ( sum - x ) + 1 ) ;
}


