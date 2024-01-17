#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    pair<int,int> p;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        if(i%m==0)p.second=p.second+i;
        else p.first = p.first+i;
    }
    cout<<p.first-p.second;  

    return 0;
}

