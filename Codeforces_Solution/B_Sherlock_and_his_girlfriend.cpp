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
    int n;
    cin>>n;
    bool prime[n+5];
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n+1; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n+1; i += p)
                prime[i] = false;
        }
    }
    if(n>2){
        cout<<"2"<<endl;
    }
    else{
        cout<<"1"<<endl;
    }
    for(int i=2;i<=n+1;++i){
        if(!prime[i]){
            cout<<"2"<<" ";
        }
        else{
            cout<<"1"<<" ";
        }
    }
}
