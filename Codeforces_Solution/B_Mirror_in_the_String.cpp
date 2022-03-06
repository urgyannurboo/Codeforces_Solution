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
int main(){
    tc{
        int n;
        in(n);
        string s;
        cin>>s;
        int ct=0;
        if(s[1]>=s[0]){
            cout<<s[0]<<s[0]<<endl;
        }
        else{
        for(int i=1;i<n;++i){
            if(s[i]<=s[i-1]){
                //k = max(k,i);
                ct+=1;
            }
            else{
                break;
            }
        }
        vector<char>v;
        for(int i=0;i<=ct;++i){
            cout<<s[i];
            v.pb(s[i]);
        }
        reverse(all(v));
        for(auto i:v){
            cout<<i;
        }
        cout<<endl;
        }
    }
}