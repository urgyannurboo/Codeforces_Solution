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
int N;
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
    int n;
    cin>>n;
	if(n<4){
		cout<<"-1";
		return 0;
	}
	int ct7 = n/7;
	int rem = n%7;
	int ct4 = rem/4;
	int toBecomeFour=rem%4;
	if(toBecomeFour!=0){
		if(ct7>=toBecomeFour){
			ct4+=((7*toBecomeFour)+toBecomeFour)/4;
			ct7-=toBecomeFour;
		}
		else{
			cout<<"-1";
			return 0;
		}
	}
    loop(ct4){
        cout<<4;
    }
    loop(ct7){
        cout<<7;
    }
}
 