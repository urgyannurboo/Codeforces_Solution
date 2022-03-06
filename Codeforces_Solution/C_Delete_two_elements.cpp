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
void solve(){
    int n;
    cin>>n;
    vector<ll>v(n);
    map<ll,ll>mp;
    for(auto &i:v){
        in(i);
        mp[i]+=1;
    }
    long long sum = accumulate(ALL(v),0LL);
    if ((2 * sum) % n != 0) {
      cout<<0<<endl;
    }
    else{
      ll ct=0;
      ll sum_two = 2*sum/n;
      for(int i=0;i<n;++i){
          int x = v[i];
          int y = sum_two - x;
          if (mp.count(y)) ct += mp[y];
          if (x == y) ct -= 1;
        }
       cout<<ct/2<<endl;
    }
    return;
}
int main(){
    //input;
    tc{
       solve();
    }
}