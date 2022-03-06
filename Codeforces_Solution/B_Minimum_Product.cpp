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
int main(){
    fastIO;
    tc{
        int a, b, x, y, n;
		cin >> a >> b >> x >> y >> n;
		ll ans = INF;
		for (int i = 0; i < 2; ++i) {
			int new_a = min(n, a - x);
			int new_b = min(n - new_a, b - y);
			ans = min(ans, (a - new_a) * 1ll * (b - new_b));
			swap(a, b);
			swap(x, y);
		}
		cout << ans << endl;
    }
}