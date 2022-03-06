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
    //input;
    tc{
        int n;
        cin>>n;
        int z=n-1;
        vi v(n);
        for(int i=0;i<n;++i){
            v[i] = i+1;
        }
        sort(ALL(v),greater<int>());
        for(int i=0;i<n;++i){
                cout<<v[i]<<" ";
            }
        cout<<endl;
        int j = 0;
        while(z--){
            swap(v[0],v[j+1]);
            for(int i=0;i<n;++i){
                cout<<v[i]<<" ";
            }
            j+=1;
            cout<<endl;
        }
    }
}