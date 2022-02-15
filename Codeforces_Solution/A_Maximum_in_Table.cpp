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
    //input;
    //vi v(n);
    //for(int &it:v) cin>>it;
    int n;
    cin>>n;
    int a[n+1][n+1];
    for(int i=1;i<=n;++i){
        a[1][i] = 1;
        a[i][1] = 1;
    }
    for(int i=2;i<=n;++i){
        for(int j=2;j<=n;++j){
            a[i][j]= a[i-1][j] + a[i][j-1];
        }
    }
    int max = INT_MIN;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            if(a[i][j] > max){
                max = a[i][j];
            }
        }
    }
    cout<<max<<endl;
}
