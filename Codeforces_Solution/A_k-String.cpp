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
int main(){
    fastIO;
    //input;
    int k;
    cin>>k;
    string s;
    cin>>s;
    map<char,int>m;
    for(auto i : s){
        m[i]+=1;
    }
    for(auto i: m){
        cout<<i.ff;
    }
    cout<<endl;
    sort(s.begin(),s.begin()+s.size());
    cout<<s<<endl;
    for(auto it : m){
        if(it.ss%k!=0){
            cout<<-1<<endl;
            return 0;
        }
    }
    loop(k){
        for(int j=0;j<s.size();j+=k){
            cout<<s[j];
        }
    }
    
}
