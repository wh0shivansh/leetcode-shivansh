#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str="ababab";
    int hash[str.length()]={0};
    char current;
    for(int i=0;i<str.length();i++){
        int count=0;
        if(hash[i]!=1){
            current=str[i];
        }else{
            continue;
        }
        for(int j=i;j<str.length();j++){
            if(str[j]==current){
                count++;
                hash[j]=1;
            }
        }
        cout<<current<<count<<endl;
    }
    return 0;
}
