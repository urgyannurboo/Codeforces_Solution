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
bool isNumber(const string& s)
{
    return all_of(s.begin(), s.end(),
                  [](char c){ return isdigit(c) != 0; });
}
int binExp(int a, int b){ 
    a %= mod;
    int ans = 1;
    while (b){
        if (b & 1){
          ans = (ans * a) % mod;
        }
       a = (a * a) % mod;
       b >>= 1;
    }
    return ans;
}
bool isPowerof2(int n){
    return !(n & (n - 1));
}
int countDigit(int n){
    return floor(log10(n) + 1);
}
int main(){
    fastIO;
	input;
    int n,v;
	cin>>n;
	int cnt[5]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>v;
		cnt[v]++;
    }
	int ans=cnt[4]+cnt[3];
	if(cnt[3]<=cnt[1])
		cnt[1]-=cnt[3];
	else
		cnt[1]=0;

	ans+=cnt[2]/2;
	if(cnt[2]%2==1)
	{
		ans++;
	    cnt[1]=max(0,cnt[1]-2);
	}

	ans+=cnt[1]/4;
	if(cnt[1]%4!=0)
		ans++;
	cout<<ans;
}