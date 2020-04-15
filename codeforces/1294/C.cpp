#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll;


ll Pow(ll a, ll b){
ll res = 1 ;
for(int i = 0 ; i < b ; i++) res *= a ;
return res ;
}

bool cmp(pair<ll, ll> s, pair<ll, ll> f){
return s.second > f.second ;
}

int main() {

    ll t, n;
    cin >> t ;
    ll a, b, c ;

    while(t--){
        cin >> n ;
        unordered_map<ll, ll> frq ;
        for(ll i = 2 ; i * i <= n ; i++){
           while(n % i == 0 && n > 1){
              frq[i]++ ;
              n /= i ;
           }
        }
        if(n > 1) frq[n]++ ;

        if(frq.size() >= 3){
            ll cnt = 0 ;
            c = 1 ;
            for(auto i: frq){
                if(cnt == 0){
                    a = 1 ;
                    for(ll j = 0 ; j < i.second; j++){
                        a *= i.first ;
                    }
                } else if(cnt == 1){
                    b = 1 ;
                    for(ll j = 0 ; j < i.second; j++){
                        b *= i.first ;
                    }
                } else {
                    for(ll j = 0 ; j < i.second; j++){
                        c *= i.first ;
                    }
                }
                cnt++ ;
            }
            cout << "YES\n" ;
            cout << a << " " << b << " " << c << "\n" ;
        } else {
            int can = 0 ;
            bool can_ = 0 ;
            vector<pair<int, int>> p ;
            for(auto i: frq){
                p.push_back({i.first, i.second}) ;
                can += i.second ;
                if(i.second >= 6) can_ = 1 ;
            }

            if(can <= 3){
                cout << "NO\n" ;
                continue ;
            }

            if(p.size() == 2 && can >= 4){
                a = p.front().first;
                b = p.back().first ;
                c = Pow(a, p.front().second - 1) * Pow(b, p.back().second - 1) ;
                cout << "YES\n" ;
                cout << a << " " << b << " " << c << "\n" ;
            } else{
                if(!can_){
                cout << "NO\n" ;
                } else{
                a = p.front().first;
                b = Pow(a, 2) ;
                c = Pow(a, p.front().second - 3) ;
                cout << "YES\n" ;
                cout << a << " " << b << " " << c << "\n" ;
                }
            }

        }


    }

}

/*
 Empty set of troubles.
*/
