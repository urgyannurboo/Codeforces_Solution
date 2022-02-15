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
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
void solve(ll n,ll k){
    ll j=1,ans=0;
    while(k>0){
        if((k%2)==1){
            ans = (ans+j)%mod;
        }
        k/=2;
        j=(j*n)%mod;
    }
    cout<<ans<<endl;
} 
int main()
{
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //#endif
    tc{
       ll n,k;
       cin>>n>>k;
       solve(n,k);
    }
}