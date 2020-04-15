#include<bits/stdc++.h>

using namespace std ;

string str ;
int n, k ;

bool can(int len){
int a, b ;
a = b = 0 ;
for(int i = 0 ; i < len ; i++){
    a += str[i] == 'a' ;
    b += str[i] == 'b' ;
}
if( a <= k || b <= k ) return 1 ;
int r = len ;
for(int i = 1 ; r < n ; i++, r++){
    a -= str[i-1] == 'a' ;
    b -= str[i-1] == 'b' ;
    a += str[r] == 'a' ;
    b += str[r] == 'b' ;
    if( a <= k || b <= k ) return 1 ;
}
return 0 ;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin >> n >> k >> str ;
    int l = 1 , r = n ;
    while(l< r){
        int mid = (l+r+1) / 2 ;
        if(can(mid)){
            l = mid ;
        } else {
            r = mid - 1 ;
        }
    }

    cout << l << "\n" ;


}
