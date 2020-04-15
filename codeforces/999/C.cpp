/******++++
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

deque<int> a['z' + 1] ;
int n, k ;
string s ;

int main() {
//  freopen("out.txt", "w", stdout) ;

    cin >> n >> k ;
    cin >> s ;
    vector<int> pos(n) ;

    for(int i = 0 ; i < n ; i++){
        a[s[i]].push_back(i) ;
    }

    for(char c = 'a' ; c <= 'z' && k ; c++){
        while(a[c].size() && k){
            pos[a[c].front()] = 1 ;
            a[c].pop_front() ;
        k--;
        }
    }

    for(int i = 0 ; i < n ; i++){
        if(!pos[i]) cout << s[i] ;
    }



}

/*
  Empty set of troubles.
*/
