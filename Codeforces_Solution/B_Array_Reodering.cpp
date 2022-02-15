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
#define endl "\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main(){
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //#endif
    tc{
       int n;
       cin >> n;
       vi a(n);
       for (int &x : a) cin >> x;
       sort(a.begin(), a.end(), [](int x, int y) {
           return x % 2 < y % 2;}  // put all the even values before the odd ones
        );
       int ans = 0;
       loop(n){
           for(int j=i+1;j<n;++j){
             if( __gcd(a[i],2*a[j]) > 1 ) ans+=1;
           }
       }
       cout<<ans<<endl;
    }
}