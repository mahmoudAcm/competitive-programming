#include<bits/stdc++.h>

using namespace std ;

#define rg register
#define dbg(v) cerr << #v << " " << v ;
typedef long long ll;

struct ios{
	template<typename TP>
	inline ios operator >> (TP &x)
	{
		TP f=1;x=0;rg char c=getchar();
		for(;c>'9' || c<'0';c=getchar()) if(c=='-') f=-1;
		for(;c>='0' && c<='9';c=getchar()) x=(x<<3)+(x<<1)+(c^'0');
		x*=f;
		return *this;
	}

}io;



struct qeury{
int a, b, c ;
};

const int N = 5000 + 5 ;
int ans[N][N] ;
int r[N], cc[N] ;

int main() {

   int n, m, k ;
   io >> n >> m >> k ;

   vector<qeury> q ;
   int a, b, c;
   for(int i = 0 ; i < k ; i++){
      io >> a >> b >> c ;
      q.push_back({a, b, c}) ;
   }

   reverse(q.begin(), q.end()) ;

   for(int i = 0 ; i < q.size() ; i++){
      a = q[i].a ;
      b = q[i].b - 1 ;
      c = q[i].c ;
      if(a == 1){
        if(!r[b]){
           r[b] = 1 ;
           for(int j = 0 ; j < m ; j++){
              if(!ans[b][j]){
                ans[b][j] = c ;
              }
           }
        }
      } else {
        if(!cc[b]){
           cc[b] = 1 ;
           for(int j = 0 ; j < n ; j++){
              if(!ans[j][b]){
                ans[j][b] = c ;
              }
           }
        }
      }
   }


   for(int i = 0 ; i < n ; i++){
     for(int j = 0 ; j < m ; j++){
        cout << ans[i][j] ;
        if(j < m - 1) cout << " " ;
     }
     cout << "\n" ;
   }



}

/*
 Empty set of troubles.
*/
