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
#define all(v) v.begin(), v.end()
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
    int x;
    cin>>x;
    vi v;
    int n = 9;
    while(x>n && n>0){
        v.insert(v.begin(),n);
        x-=n;
        n--;
    }
    if(x>n){
        cout<<-1<<endl;
        return ;
    }
    else{
        v.insert(v.begin(),x);
        for(auto i:v){
            cout<<i;
        }
        cout<<endl;
        return;
    }
}
int main(){
    //input;
    tc{
        solve();
    }
}