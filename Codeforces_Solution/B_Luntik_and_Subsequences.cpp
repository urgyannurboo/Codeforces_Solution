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
int main()
{
	//input;
    tc{
        int n;
        ll a;
        cin >> n;
        ll ct0 = 0,ct1 = 0;
        for (int i = 1; i <= n; ++i) {
            cin >> a;
            if (a == 0) ct0++;
            if (a == 1) ct1++;
        }
        cout << (1ll << ct0) * ct1 << '\n';
    }
	return 0;
}

