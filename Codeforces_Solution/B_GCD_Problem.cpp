#include<bits/stdc++.h>
#include<iomanip>
#define ll long long
#define loop(n) for(int i=0;i<n;i++)
#define ff first
#define ss second
#define pii pair<int, int>
#define mii map<int, int>
#define vi vector<int>
#define mp make_pair
#define pb push_back
#define pob pop_back
#define ALL(v) v.begin(), v.end()
#define tc   ll t;     cin>>t;   while(t--)
#define INF 1000000000000000003
#define in(x) cin >> (x)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define mod 256;
#define input  freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
void solve(){
    ll n;
    cin>>n;
    if(n%2==0){
        cout<<"2 "<<n-1-2<<" 1\n";
    }
	else{
		int cur=(n-1)/2;
		if (cur%2==0){
            cout<<cur-1<<" "<<cur+1<<" "<<1<<endl;
        }
		else{
            cout<<cur-2<<" "<<cur+2<<" "<<1<<endl;
        }
	}
    return ;
}
int main(){
    //input;
    tc{
        solve();
    }
}