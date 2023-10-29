#include <bits/stdc++.h>
#include <map>
#include <set>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>s;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        s.insert(a[i]);
    }
    int x; cin>>x;
    if (s.count(x)==1){
        cout<<"YES";
    }
    else cout<<"NO";
}


 