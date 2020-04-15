#include<bits/stdc++.h>

using namespace std ;

int main(){
    ios_base :: sync_with_stdio(0) ;
    cin.tie(0) ;
    cout.tie(0) ;

    int l, r ;
    cin >> l >> r ;
    for(int i = l ; i <= r ; i++){
        int t = i ;
        bool c = 1 ;
        unordered_map<int, int>mp ;
        while(t){
            if( mp[t%10] ){
                c = 0 ;
                break ;
            }
            mp[t%10] = 1 ;
            t /= 10 ;
        }
        if(c){
            cout << i << "\n" ;
            return 0 ;
        }
    }


    cout << "-1" ;


}
