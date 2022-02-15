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
bool check(){
    int n;
    in(n);
    vi v;
    v.resize(n);
    ll sum = 0;
    for(auto &i : v) in(i);
    for(auto it: v){
        sum+=it;
        if(sum<=0) return 0;
    }
    sum = 0;
    for(auto it = v.end()-1;it>=v.begin();--it){
        sum+=(*it);
        if(sum<=0) return 0;
    }
    return 1;
}
int main(){
    fastIO;
    tc{
        if(check()) yes
        else no
    }
}