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
#define rsort(x) x.rbegin(), x.rend()
#define tc   ll t;     cin>>t;   while(t--)
#define INF 1000000000000000003
#define input(x) cin >> (x)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main(){
    fastIO;
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //#endif
    tc{
        int n;
        cin>>n;
        vi a(n);
        vi b(n);
        loop(n)
           cin>>a[i];
        loop(n)
           cin>>b[i];
        for(int i=0;i<n;++i){
            if(a[i]<b[i]) swap(a[i],b[i]);
        }
        auto max1 = max_element(ALL(a));
        auto max2 = max_element(ALL(b));
        cout<<*max1*(*max2)<<endl;
        
    }
}