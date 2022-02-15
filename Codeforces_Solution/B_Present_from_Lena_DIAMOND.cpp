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
#define mod 1000000007
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main(){

    //#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
   // #endif
    int n;
    cin>>n;
    for (int row = -n; row <= n; ++row)
    {
        int top = n - abs(row);       //0 1 2 3 2 1 0
        cout<<setw(2*abs(row)+1);
        for (int i = 0; i < top; ++i)
        {
            cout << i << " ";
        }
        for (int i = top; i > 0; --i)
        {
            cout << i << " ";
        }
        cout << 0 << endl;
    }
} 