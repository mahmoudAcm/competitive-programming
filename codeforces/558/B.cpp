#include<bits/stdc++.h>

using namespace std ;

int n, v ;
const int N = 1e6 + 5 ;
vector<int> indx[N] ;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n ;
    int mx = 0 ;
    for(int i = 0 ; i < n ; i++){
        cin >> v ;
        indx[v].push_back(i+1) ;
        mx = max((int)indx[v].size(), mx) ;
    }

    int mn = N ;
    int be, en ;
    for(int i = 0 ; i < N ; i++){
        if(indx[i].size() == mx){
            if(mn > indx[i].back() - indx[i].front()){
               mn = min(mn, indx[i].back() - indx[i].front()) ;
               be = indx[i].front() ;
               en = indx[i].back() ;
            }
        }
    }



    cout << be << " " << en ;



}
