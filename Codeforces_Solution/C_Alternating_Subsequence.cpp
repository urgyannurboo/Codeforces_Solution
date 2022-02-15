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
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int isPositive(int x){
    if(x>0) return 1;
    else return -1;
}
ll solve(int A[],int n)
{
    ll sum = 0;
    for(int i=0;i<n;++i){
        int j=i;
        int cur = A[i];
        while(j<n && isPositive(A[i])==isPositive(A[j])){
            cur = max(cur,A[j]);
            j++;
        }
        sum+=cur;
        i = j-1;
    }
    return sum;
}
int main(){
    fastIO;
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //#endif
    tc{
    int n;
    cin>>n;;
    int a[n];
    loop(n){
        cin>>a[i];
    }
    cout<<solve(a,n)<<endl;
    }
}  
 