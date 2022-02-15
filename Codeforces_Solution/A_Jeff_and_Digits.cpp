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
int main(){
    fastIO;
    int n;
    cin>>n;
    vi v(n);
    for(auto &it: v) in(it);
    int ct5=0,ct0=0;
    for(auto it:v){
        if(it==5) ct5++;
        else ct0++;
    }
    if(ct0==0) cout<<-1<<endl;
    else if(ct5<9) cout<<0<<endl;
    else{
        int x = (ct5/9)*9;
        for(int i=0;i<x;++i){
            cout<<5;
        }
        for(int j=0;j<ct0;j++){
            cout<<0;
        }
    }

}