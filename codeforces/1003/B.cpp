/******++++
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int main() {
//  freopen("out.txt", "w", stdout) ;

   int a, b, c ;
   cin >> a >> b >> c ;

   int mx = max(a, b), mn = min(a, b) ;
   vector<deque<char>> st(mx + 2) ;
   bool ch = 0 ;
   if(mx == b) ch = 1 ;
   else ch = 0 ;

   for(int i = 0 ; i < mx ; i++){
    st[i].push_back(ch + '0') ;
   }

   int ck = c ;
   if(c - 1 >= 0 && mn){
     st[(c % 2 == 0? 1: 0)].push_front(ch ^ 1 + '0') ;
     mn-- ;
     c--;
   }

   for(int i = (ck % 2 == 0? 1: 0) ; i < st.size() && mn ; i++){
     if(c - 2 >= 0){
        st[i].push_back(ch ^ 1 + '0') ;
        c -= 2 ;
        mn-- ;
     }
   }

   if(c == 1 && mn){
     for(int i = 0 ; i < mn ; i++){
        st[(ck % 2 == 0? 1: 0)].push_front(ch ^ 1 + '0') ;
     }
     mn = 0 ;
   }


     for(int i = 0 ; i < mn ; i++){
        st[(ck % 2 == 0? 1: 0)].push_front(ch ^ 1 + '0') ;
     }

   for(int i = 0 ; i < mx ; i++){
     for(auto j: st[i]){
        cout << j ;
     }
   }



}


/*
  Empty set of troubles.
*/
