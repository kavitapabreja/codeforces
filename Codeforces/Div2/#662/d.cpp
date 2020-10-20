#include <bits/stdc++.h> 
#include <functional> 
using namespace std;
#define speed_cubing    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll              long long
#define ld              long double
#define rep(i,a)        for(ll i = 0 ; i < a ; i++)
#define pb              push_back
#define in              insert
#define ff              first
#define ss              second
#define init(c,a)       memset(c,a,sizeof(c))
#define all(c)          c.begin(),c.end()
#define sz(c)           (ll)c.size()
#define rev             reverse
#define endl            "\n"
const ll inf = 1e18;  
const ll mod = 1e9 + 7;
const ll MOD = 998244353;
const ll MAX = 2e5 + 1;

ll n, m;
string s[2001];

bool checkCenter(ll i, ll j){
    ll cnt = 0;
    if(i - 1 >= 0) cnt += (s[i - 1][j] == s[i][j]);
    if(i + 1 < n) cnt += (s[i + 1][j] == s[i][j]);
    if(j - 1 >= 0) cnt += (s[i][j - 1] == s[i][j]);
    if(j + 1 < m) cnt += (s[i][j + 1] == s[i][j]);
    return cnt != 4;
}
void speed_solve(){
    cin >> n >> m;
    rep(i,n){
        cin >> s[i];
    }
    ll dis[n][m];
    init(dis, 0);
    queue <pair<ll, ll>> q;
    rep(i,n){
        rep(j,m){
            if(checkCenter(i, j)){
                dis[i][j] = 1;
                q.push({i, j});
            }
        }
    }
    while(!q.empty()){
        pair <ll, ll> cur = q.front();
        q.pop();
        if(cur.ff - 1 >= 0 and !dis[cur.ff - 1][cur.ss]){
            dis[cur.ff - 1][cur.ss] = dis[cur.ff][cur.ss] + 1;
            q.push({cur.ff - 1, cur.ss});
        }
        if(cur.ff + 1 < n and !dis[cur.ff + 1][cur.ss]){
            dis[cur.ff + 1][cur.ss] = dis[cur.ff][cur.ss] + 1;
            q.push({cur.ff + 1, cur.ss});
        }
        if(cur.ss - 1 >= 0 and !dis[cur.ff][cur.ss - 1]){
            dis[cur.ff][cur.ss - 1] = dis[cur.ff][cur.ss] + 1;
            q.push({cur.ff, cur.ss - 1});
        }
        if(cur.ss + 1 < m and !dis[cur.ff][cur.ss + 1]){
            dis[cur.ff][cur.ss + 1] = dis[cur.ff][cur.ss] + 1;
            q.push({cur.ff, cur.ss + 1});
        }
    }
    ll ans = 0;
    rep(i,n){
        rep(j,m){
            ans += dis[i][j];
        }
    }
    cout << ans << endl;
}

int main(){
    speed_cubing;
    ll test_cases = 1;
    rep(i,test_cases){
        speed_solve();
    }
    return 0;
}