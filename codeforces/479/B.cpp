#include <bits/stdc++.h>

using namespace std;

typedef long long ll ;

int main()
{

    int n, k ;
    cin >> n >> k ;
    vector<pair<int, int>> a(n) ;
    vector<pair<int, int>> ans ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i].first ;
        a[i].second = i + 1 ;
    }



    for(int i = 0 ; i < k ; i++){
         sort(a.begin(), a.end()) ;
         int &mn = a.front().first;
         int &mx = a.back().first ;
         if(mx > mn){
           mx--;
           mn++;
           ans.push_back({a.back().second, a.front().second}) ;
         } else break ;
    }

    sort(a.begin(), a.end()) ;
    cout << a.back().first - a.front().first << " " << ans.size() << "\n" ;
    for(auto c: ans){
        cout << c.first << " " << c.second << "\n" ;
    }


    return 0;
}
