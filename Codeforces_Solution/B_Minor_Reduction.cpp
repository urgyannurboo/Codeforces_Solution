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
    input;
    tc{
        int x;
        cin>>x;
        vi v;
        n = countDigit(x);
        while(x!=0){
            v.pb(x%10);
            x/=10;
        }
        reverse(ALL(v));
        vector<pair<int,int>>num;
        for(auto it = v.begin();it<v.end()-1;it++){
            num.pb(mp(*it,(*it + *(it+1))));
        }
        for(auto i : num){
            new_num.pb(i.ss*pow(10,s.size()-2) + 
        }
        vector<int> new_num;
    }
}