#include<bits/stdc++.h>

using namespace std ;

int n ;
string str ;
map<string, bool> Hash ;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n ;
    for(int i = 0; i < n ; i++){
        cin >> str ;
        int t = str.size() ;
        for(int i = 1 ; i <= 2 ; i++){
            for(int j = 0 ; j < t - i + 1 ; j++){
                 Hash[str.substr(j, i)] = 1 ;
            }
        }
    }

    for(char a = 'a' ; a <= 'z' ; a++){
        string tmp = "" ;
        tmp.push_back(a) ;
            if(!Hash[tmp]){
                cout << tmp ;
                return 0 ;
            }
    }

    for(char a = 'a' ; a <= 'z' ; a++){
        string tmp = "" ;
        tmp.push_back(a) ;
        for(char b = 'a' ; b <= 'z' ; b++){
            tmp.push_back(b) ;
            if(!Hash[tmp]){
                cout << tmp ;
                return 0 ;
            }
            tmp.pop_back() ;
        }
    }



}
