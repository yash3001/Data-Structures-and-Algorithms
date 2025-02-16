/* @author -> gamma30 */
#include <bits/stdc++.h>
#include <new>

#define pb push_back
#define eb emplace_back
#define x first
#define y second
#define endl "\n"
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

void solve(){
    ll n; cin>>n;
    vll s;
    forf(ll, i, n){
        ll t; cin>>t;
        s.push_back(t);
    }
    sort(s.begin(), s.end());
    ll diff{s.back()-s.front()};
    forf(ll, i, n-1){
        if((s.at(i+1)-s.at(i))<diff)
            diff = s.at(i+1)-s.at(i);
    }
    cout<<diff<<endl;
}

int main(){
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}