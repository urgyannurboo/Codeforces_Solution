#include<bits/stdc++.h>
#include<iomanip>
#define ll long long int
#define forl(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define Forr(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
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
#define input(x) cin >> (x)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define mod 256;
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
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //#endif
    tc{
       int n,e=0,o=0,d=0;
       cin>>n;
       vi v(n);
       loop(n){
           cin>>v[i];
           if(v[i]%2==0) e++;
           else o++;
       }
       sort(ALL(v));
       for(int i=1;i<n;++i){
           if(abs(v[i]-v[i-1])==1) d++;
       }
       if(e%2==0 && o%2==0){
           yes
       }
       else if(e%2==1 && o%2==1){
           if(d>=1) yes
           else no
       }
       else if(e!=0) no
       else no
    }
}
