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
ll sum_digit(ll n){
    ll sum = 0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main(){
    fastIO;
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //#endif
    string s;
    cin>>s;
    int ct=1,sum=0,ans;
    if(s.size()!=1)
    {
        for(auto it:s)
        {
            sum+=(it-'0');
        }
        while(sum>=10)
        {
            ans=sum;
            sum=sum_digit(ans);
            ct++;
        }
        cout<<ct<<endl;
    }
    else
        cout<<"0"<<endl;
    return 0;
}
