#include<bits/stdc++.h>

using namespace std ;

typedef long long ll ;

int n;
vector<pair<int, int>> a ;

int main(){

   /*ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);*/

   int v ;
   cin >> n ;
   int sum = 0 ;
   while(n--){
     cin >> v ;
     if( v % 2 == 0 ) a.push_back({v, 0}), sum += v/2;
     else if( v % 2 ) a.push_back({v, 1}), sum += v/2;
   }

   if(sum > 0){
      for(int i = 0 ; i < a.size() ; i++){
         if(a[i].second && a[i].first < 0 && sum > 0){
            sum-- ;
            a[i].first = floor(a[i].first / 2.0) ;
         } else a[i].first = a[i].first / 2 ;
      }
   } else if( sum < 0 ){
      for(int i = 0 ; i < a.size() ; i++){
         if(a[i].second && a[i].first > 0 && sum < 0){
            sum++;
            a[i].first = ceil(a[i].first / 2.0) ;
         } else a[i].first = a[i].first / 2 ;
      }
   } else {
      for(int i = 0 ; i < a.size() ; i++){
        a[i].first /= 2 ;
      }
   }



   for(int i = 0 ; i < a.size() ; i++)
     cout << a[i].first << "\n" ;





}
