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
signed main()
{
    fastIO;
    tc{
	    int n, m, r, c;
		cin>>n>>m>>r>>c;
		char a[n][m];
        int ct=0;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>a[i][j];
                if(a[i][j]=='B') ct+=1;
            }
        }
        int flag=0;
        if(ct==0){
            cout<<-1<<endl;
        }
        else if(a[r-1][c-1]=='B'){
            cout<<0<<endl;
        }
        else{
            for(int i=0;i<m;++i){
                if(a[r-1][i]=='B'){
                    flag=1;
                    break;
                }
            }
            for(int i=0;i<n;++i){
                if(a[i][c-1]=='B'){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
	}
    return 0;
}