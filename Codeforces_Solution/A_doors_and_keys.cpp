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
    string s;
    cin>>s;
    int n = s.size()-1;
    int flagr=0,flagb=0,flagg=0;
    for(int i=0;i<=n;++i){
        if(s[i]=='R'){
            for(int j=i;j<=n;j++){
                if(s[j]=='r'){
                    flagr=1;
                }
            }
        }
        if(s[i]=='G'){
            for(int j=i;j<=n;j++){
                if(s[j]=='g'){
                    flagg=1;
                }
            }
        }
        if(s[i]=='B'){
            for(int j=i;j<=n;j++){
                if(s[j]=='b'){
                    flagb=1;
                }
            }
        }
    }
    if(flagr==1 || flagg==1 || flagb==1) no
    else yes
    return ;
} 
void solve1(){
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<s.size();++i){
       mp[s[i]]=i;
    }
    if(mp['r']<mp['R'] && mp['g']<mp['G'] && mp['b']<mp['B']) yes
    else no
}    
int main(){
    input;
    tc{
       solve1();
       solve();
    }
}