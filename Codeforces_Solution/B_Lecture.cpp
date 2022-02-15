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
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define U unsigned int
#define endl "\n"
const int MOD = 1000000007;
const int MAX = 1000001;
int main(){
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //#endif
    int n,m;
    cin>>n>>m;
    string s1,s2;
    vector<pair<string,string>>v;
    while(m--){
        cin>>s1>>s2;
        v.pb(mp(s1,s2));
    }
    while(n--){
        string s3;
        cin>>s3;
        for(auto it: v){
            if(s3==it.ff){
                if((it.ff).size()>(it.ss).size()) cout<<it.ss<<" ";
                else cout<<it.ff<<" ";
            }
        }
    }
    return 0;
}