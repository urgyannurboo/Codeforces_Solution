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
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
vector<ll> lucky;
void rec(ll n, int f, int s) {
  if(n > 1e10) return;
  if(f == s)
    lucky.pb(n);
  rec(n * 10 + 7, f, s + 1);
  rec(n * 10 + 4, f + 1, s);
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    rec(4, 1, 0);
    rec(7, 0, 1);
    ll n;
    in(n);
    sort(ALL(lucky));
    cout << lucky[lower_bound(ALL(lucky), n) - lucky.begin()] << endl;
    return 0;
}