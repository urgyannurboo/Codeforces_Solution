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
bool is_prime(int n){
    for(int i=2;i*i<=n;++i){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    fastIO;
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //#endif
    int n;
    cin>>n;
    if(is_prime(n)==1){
       cout<<1<<endl;
    }
    else if(n%2 && !is_prime(n-2)){
        cout<<3<<endl;
    }
    else{
        cout<<2<<endl;
    }
}
