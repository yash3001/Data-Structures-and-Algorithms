/* @author -> gamma30 */
#include <bits/stdc++.h>
#include <utility>

#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define endl "\n"
#define EPS 1e-9
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forf(t,i,n) for(t i=0;i<n;i++)
#define forr(t,i,n) for(t i=n-1;i>=0;i--)
#define print(x) for(const auto &e: (x)) { cout<<e<<" "; } cout<<endl

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;

void solve(){
    ll n; cin>>n;
    vector<pair<ll, ll>> h, s;
    forf(ll, i, n){
        ll t; cin>>t;
        h.pb(make_pair(t, i+1));
        if(i==0 || i==1){
            s.pb(h.at(i));
        }
    }
    ll ans{1}, top=s.size()-1;
    if(n>2){
        for(ll i=2; i<n; i++){
            while(s.size()>=2){
                if(((h.at(i).ff - s.at(top).ff) / (h.at(i).ss - (double)s.at(top).ss)) >= ((s.at(top).ff - s.at(top-1).ff) / ((double)s.at(top).ss - s.at(top-1).ss))){
                    top--; s.pop_back();
                }
                else{
                    break;
                }
            }
            ans = max(ans, h.at(i).ss - s.at(top).ss);
            top++; s.pb(h.at(i));
        }
    }
    cout<<ans<<endl;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}