#include <bits/stdc++.h> 
using namespace std;
#define speed_cubing    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll              long long
#define ld              long double
#define rep(i,a)        for(ll i = 0 ; i < a ; i++)
#define pb              push_back
#define in              insert
#define maxe            *max_element
#define endl            "\n"
const ll inf = 1e18;  
const ll mod = 1e9 + 7;
const ll MOD = 998244353;
const ll MAX = 2e5 + 1;

void speed_solve(){
    ll n;
    cin >> n;
    ll a[n], f[MAX] = {};
    rep(i,n) cin >> a[i], f[a[i]]++;
    ll mx = maxe(f,f + MAX), freqMx = 0;
    rep(i,MAX){
        freqMx += (f[i] == mx);
    }
    mx--;
    cout << (n - freqMx - mx) / mx << endl;
}

int main(){
    speed_cubing;
    ll test_cases = 1;
    cin >> test_cases;
    rep(i,test_cases){
        // cout << "Case #" << i + 1 << ": ";
        speed_solve();
    }
    return 0;
}