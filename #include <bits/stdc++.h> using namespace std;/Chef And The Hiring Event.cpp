#include <bits/stdc++.h>
using namespace std;

//defining macros
#define fast_in_out \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);
#define ll long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
const int mod=1e9+7;

int main() {
    fast_in_out;
	int t; cin>>t;
	while(t--){
	    ll k; cin>>k;
	    vector<ll> vec;
	    k--;
	    while(k>0){ vec.push_back(k%5);  k/=5; }
	    ll res=0;
	    for(int i=vec.size()-1; i>=0; i--){ res= res*10 + vec[i]*2; }
	    cout<<res<<endl;
	}
	return 0;
}
