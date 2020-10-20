#include <bits/stdc++.h> 
#include <functional> 
using namespace std;
#define speed_cubing    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll              int
#define ld              long double
#define rep(i,a)        for(ll i = 0 ; i < a ; i++)
#define repe(i,a,b)     for(ll i = a ; i < b ; i++)
#define pb              push_back
#define in              insert
#define init(c,a)       memset(c,a,sizeof(c))
#define all(c)          c.begin(),c.end()
#define sz(c)           (ll)c.size()
#define endl            "\n"

const ll mod = 1e9 + 7;
const ll MOD = 998244353;
const ll MAX = 1e5 + 50;


void speed_solve(){
    ll n;
    cin >> n;
    ll f[MAX] = {}, a[n];

    rep(i,n) cin >> a[i], f[a[i]]++;
    multiset <ll, greater<ll>> s;
    rep(i,MAX) {
        if(f[i]){
            s.in(f[i]);
        }
    }
    ll q;
    cin >> q;
    while(q--) {
        char c;
        ll x;
        cin >> c >> x;
        if(s.count(f[x])){
            s.erase(s.find(f[x]));
        }
        f[x] += (c == '+' ? 1 : -1);
        s.in(f[x]);

        ll two = 0, four = 0, itr = 0;
        for(auto freq : s){
            if(itr < 3){
                ll cur = freq;
                if(!four and cur > 3){
                    four++;
                    cur -= 4;
                }
                rep(i,2){
                    if(two <= 1 and cur > 1){
                        two++;
                        cur -= 2;
                    }
                }
                itr++;
            } else {
                break;
            }
        }
        cout << (four == 1 and two == 2 ? Y : N) << endl;
    }
}

int main(){
    speed_cubing;
    ll test_cases = 1;
    // cin >> test_cases;
    rep(i,test_cases){
        speed_solve();
    }
    return 0;
}