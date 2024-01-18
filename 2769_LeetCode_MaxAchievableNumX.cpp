#include<bits/stdc++.h>
using namespace std;

int maxAchievable(int num,int t){
	return num + 2*t;
}

int main(){
	int num,t;
	cin>>num>>t;
	cout<<maxAchievable(num,t);
	return 0;
}