#include <bits/stdc++.h>
#include <map>
#include <set>
using namespace std;
int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
    string x; getline(cin,x);
    map<string,int>mp;
    stringstream ss(x);
    string tmp;
    while(ss>>tmp){
    mp[tmp]++;
    }
int max=0;
string res;
for(auto it:mp){
    if (it.second>max){
        max=it.second;
        res=it.first;
    }
}
cout<<res<<" "<<max<<endl;
}
}
