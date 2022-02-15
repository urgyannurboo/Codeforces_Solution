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
#define N 100005
int LIS(int a[], int n)
{
    int dp[N], d[N];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        dp[a[i]] = 1;
        for (int j = 2; j * j <= a[i]; j++) {
            if (a[i] % j == 0) {
                dp[a[i]] = max(dp[a[i]], dp[d[j]] + 1);
                dp[a[i]] = max(dp[a[i]], dp[d[a[i] / j]] + 1);
                d[j] = a[i];
                d[a[i] / j] = a[i];
            }
        }
        ans = max(ans, dp[a[i]]);
        d[a[i]] = a[i];
    }
    return ans;
}
int main(){
    fastIO;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    int a[n];
    loop(n){
        in(a[i]);
    }
    cout<<LIS(a,n)<<endl;
}
