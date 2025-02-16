/* @author -> gamma30 */
#include <bits/stdc++.h>
#include <set>

#define pb push_back
#define eb emplace_back
#define x first
#define y second
#define endl "\n"
#define EPS 1e-9
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forf(t,i,n) for(t i=0;i<n;i++)
#define forr(t,i,n) for(t i=n-1;i>=0;i--)

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<ll> vll;
typedef vector<string> vs;

void solve(){
    string s; cin>>s;
    vector<char> v;
    for(auto const &c: s){
        v.pb(c);
    }
    sort(all(v));
    if(v.at(0)=='C'&&v.at(1)=='M'&&v.at(2)=='P'){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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