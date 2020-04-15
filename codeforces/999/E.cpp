/******++++
author :- Mahmoud Tarek.
*******/

#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll ;

int n, m, cap, x, y ;
const int N = 5e3 + 5 ;
vector<int> adj[N], cre[N] ;
int sub[N][N] ;
unordered_map<int, bool> in ;

void bfs(int u){
queue<int> q ;
q.push(u) ;
sub[u][u] = 1 ;
while(q.size()){
    int cur = q.front() ;
    q.pop();
    for(auto i: adj[cur]){
        if(sub[u][i] == -1){
            sub[u][i] = 1 ;
            q.push(i) ;
        }
    }
}
}

bool cmp(int s, int f){
return cre[s].size() > cre[f].size() ;
}

int main() {
//  freopen("out.txt", "w", stdout) ;

    memset(sub, -1, sizeof sub);

    cin >> n >> m >> cap ;
    for(int i = 0 ; i < m ; i++){
        cin >> x >> y ;
        adj[x].push_back(y) ;
    }

    for(int i = 1 ; i <= n ; i++){
        bfs(i) ;
    }

    vector<int> free ;
    for(int i = 1; i <= n ; i++){
        if(sub[cap][i] == -1){
            free.push_back(i);
        }
    }

    for(auto i: free){
        for(int j: free){
            if(sub[i][j] != -1){
                cre[i].push_back(j) ;
            }
        }
    }


    sort(free.begin(), free.end(), cmp) ;


    int cnt = 0 ;

    for(int i = 0 ; i < free.size() ; i++){
        bool can = 0 ;
        if(!in[free[i]]){
            can = 1 ;
            in[free[i]] = 1 ;
        }
        for(auto j: cre[free[i]]){
            if(!in[j]){
                in[j] = 1 ;
                can = 1 ;
            }
        }
        cnt += can ;
    }

    cout << cnt ;

}

/*
  Empty set of troubles.
*/
