/*

██╗   ██╗ ██████╗   ██████╗ ██╗    ██╗  █████╗  ███╗    ██╗        
██║   ██║ ██╔══██╗ ██╔════╝ ╚██╗  ██╔╝ ██╔══██╗ ████╗   ██║        
██║   ██║ ██████╔╝ ██║  ███╗  ╚████╔╝  ███████║ ██╔ ██╗ ██║        
██║   ██║ ██╔══██╗ ██║   ██║   ╚██╔╝   ██╔══██║ ██║ ╚██╗██║        
╚██████╔╝ ██║  ██║ ╚██████╔╝    ██║    ██║  ██║ ██║  ╚████║        
 ╚═════╝  ╚═╝  ╚═╝  ╚═════╝     ╚═╝    ╚═╝  ╚═╝ ╚═╝   ╚═══╝

*/                                                                       
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
int Bin_Exp(int a, int b){ 
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
void solve(){
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    int ans=0;
    if(y1==y2 and y1>y3){
      ans+=(abs(x1-x2));
    }
    if(y2==y3 and y2>y1){
      ans+=(abs(x2-x3));
    }
    if(y1==y3 and y1>y2){
      ans+=(abs(x1-x3));
    }
    cout<<ans<<endl;
}
int main(){
    fastIO;
    //input;
    tc{
        solve();
    }
}