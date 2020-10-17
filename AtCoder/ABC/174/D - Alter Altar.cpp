/*
    ThunderClap and Flash
    Raunaq Singh
*/
#include "bits/stdc++.h" 
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pll;
#define ThunderClap ios::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define debugg(something)   cout<<#something<<" - "<<something<<"\n";
#define vi vector
#define umap unordered_map
#define uset unordered_set
#define mset multiset
#define LB lower_bound
#define UB upper_bound
#define mp make_pair
#define pb push_back
#define in insert
#define s second
#define f first
#define pQueue priority_queue
#define maxElement *max_element
#define minElement *min_element
#define MAX 100000LL
#define mod 1000000007LL
#define inf 1000000000000000000LL
#define mI2 500000004LL
inline ll add(ll a, ll b){ return ((a%mod) + (b%mod))%mod;}
inline ll mul(ll a, ll b){ return ((a%mod) * (b%mod))%mod;}
inline ll sub(ll a, ll b){ return ((a%mod) - (b%mod) + mod)%mod;}

void Flash(){
    ll n;
    cin>>n;
    string ss;
    cin>>ss;
    ll cntW = 0, cntR = 0;
    for (ll i = 0; i < n; i++) {
        cntW += (ss[i] == 'W');
        cntR += (ss[i] == 'R');
    }
    string chk;
    while (cntR--) {
        chk.pb('R');
    }
    while (cntW--) {
        chk.pb('W');
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ans += (ss[i] != chk[i]);
    }
    ans /= 2;
    cout<<ans<<"\n";
}

int main(int argc, char const *argv[]){ 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    ThunderClap;
    ll t = 1;
    //cin>>t;
    for(ll i = 1; i <= t; i++){
        //cout<<"Case #"<<i<<": ";
        Flash();
    }
    return 0;
}
