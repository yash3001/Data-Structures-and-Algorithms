/* @author -> gamma30 */

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>

#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define endl "\n"
#define EPS 1e-9
#define MOD 1e9+7
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
// #define forf(t,i,n) for(t i=0;i<n;i++)
// #define forr(t,i,n) for(t i=n-1;i>=0;i--)
#define forf(i,a,b) for(ll i=a;i<b;i++)
#define forr(i,a,b) for(ll i=a;i>=b;i--)
#define ceach(a,x) for(const auto &a: x)
#define each(a,x) for(auto &a: x)
#define print(x) for(const auto &e: (x)) { cout<<e<<" "; } cout<<endl

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef unordered_map<int, int> umi;
typedef unordered_map<long long, long long> umll;
typedef unordered_map<char, int> umci;
typedef unordered_map<char, long long> umcll;
typedef unordered_map<string, int> umsi;
typedef unordered_map<string, long long> umsll;

template<typename T>
T gcd(T a, T b){
    if(b == 0)
        return a;
    return(gcd<T>(b, a%b));
}

template<typename T>
T lcm(T a, T b){
    return (a / gcd<T>(a, b)) * b;
}

template<typename T>
void swap_(T &a, T &b){
    a = a^b;
    b = b^a;
    a = a^b;
}

template<typename T>
T modpow(T a, T b, T m){
    if(b == 0){
        return 1;
    }
    T c = modpow(a, b/2, m);
    c = (c * c)%m;
    if(b%2 == 1){
        c = (c * a)%m;
    }
    return c;
}

/* ----------STRING AND INTEGER CONVERSIONS---------- */
// 1) number to string -> to_string(num)
// 2) string to number -> stoi(str)

void solve(){
    ll n, m; cin>>n>>m;
    vll a(n), b(m);
    each(x, a){
        cin>>x;
    }
    each(x, b){
        cin>>x;
    }
    sort(all(a));
    sort(all(b));
    umll mp;
    vll uniq_b;
    each(x, b){
        if(!mp[x]){
            uniq_b.pb(x);
        }
        mp[x]++;
    }
    // print(a);
    // print(uniq_b);

    ll ans = n;
    for(int i=0; i<n; i++){
        if(mp[a[i]]){
            ans--;
            mp[a[i]]--;
            continue;
        }
        each(x, uniq_b){
            if(x > a[i] && mp[x] > 0){
                mp[x]--;
                ans--;
                break;
            }
        }
    }
    cout<<ans;
}

int main(){

    // cfh - ctrl+alt+b
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t=1;
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}