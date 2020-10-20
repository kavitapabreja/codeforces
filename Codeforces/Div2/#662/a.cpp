#include <bits/stdc++.h> 
using namespace std;
#define speed_cubing    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll              long long
#define rep(i,a)        for(ll i = 0 ; i < a ; i++)
#define endl            "\n"

void speed_solve(){
    ll n;
    cin >> n;
    cout << n / 2 + 1 << endl;
}

int main(){
    speed_cubing;
    ll test_cases = 1;
    cin >> test_cases;
    rep(i,test_cases){
        speed_solve();
    }
    return 0;
}