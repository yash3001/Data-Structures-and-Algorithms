/* @author -> gamma30 */
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adlist(100001);
vector<int> visited(100001, 0);

void dfs(int n){
    visited.at(n) = 1;
    cout<<n<<endl;
    for(int i=0; i<adlist.at(n).size(); i++){
        if(!visited.at(adlist.at(n).at(i))){
            dfs(adlist.at(n).at(i));
        }
    }
}

int main(){
    cout<<"Enter the number of nodes ";
    int n; cin>>n;
    cout<<"Enter the number of edges ";
    int m; cin>>m;
    cout<<"Enter the edges"<<endl;
    while(m--){
        int a, b; cin>>a>>b;
        adlist.at(a).push_back(b);
        adlist.at(b).push_back(a);
    }
    int count{};
    for(int i=1; i<n+1; i++){
        if(!visited.at(i)){
            dfs(i);
            count++;
        }
    }
    cout<<"Number of connected components are "<<count<<endl;
    return 0;
}