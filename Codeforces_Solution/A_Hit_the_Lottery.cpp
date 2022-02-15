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
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //#endif
    int n;
    in(n);
    int ct=0;
    while(n>=100){
        ct+=1;
        n-=100;
    }
    while(n>=20){
        ct+=1;
        n-=20;
    }
    while(n>=10){
        ct+=1;
        n-=10;
    }
    while(n>=5){
        ct+=1;
        n-=5;
    }
    if(n>=1 && n<5){
        ct+=n;
    }
    cout<<ct<<endl;
}