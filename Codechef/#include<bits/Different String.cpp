#include<bits/stdc++.h>
#define ll long long
using namespace std;
string binary(int n,int m){
    string s = "";
    for(int i =0;i<m;i++){
      s.push_back(n%2+'0');
      n=n/2;
    }
   string x;
   for(int i =m-1;i>=0;i--){
    x.push_back(s[i]);
   }
    return x;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll tt;
cin>>tt;
while(tt--){
    ll n;
    cin>>n;
    map<string,ll>m;
    for(int i =0;i<n;i++){
        string tp;
        cin>>tp;
        m[tp]=1;
    }
    for(int i =0;i<101;i++){
        string s = binary(i,n);
        if(!m[s]){
            cout<<s<<endl;
            break;
        }
    }
}

 return 0;
}
