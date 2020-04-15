#include<bits/stdc++.h>

using namespace std ;

int t;
string st ;
int FRQ[27] ;

int main() {
   cin >> t ;
   while(t--){
    cin >> st ;
    int n = st.size() ;
    memset(FRQ, 0, sizeof(FRQ));

    for(int i = n - 1 ; i >= 0 ; i--){
        char a = st[i] ;
        int cn = 0 ;
        while(i >= 0 && st[i] == a){
            cn++ ;
            i-- ;
        }
        i++;
        if(cn % 2){
            FRQ[a-'a'] = 1 ;
        }
    }


    for(int i = 0 ; i < 26 ; i++){
        if(FRQ[i])
        cout << char(i+'a') ;
    }
    cout << "\n" ;
   }
}
