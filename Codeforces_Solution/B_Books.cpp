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
int main()
{
    int n,t;
    cin>>n>>t;
    int arr[n];
    loop(n){
        cin>>arr[i];
    }
    int sum=0;
    int i=0;
    int curr=0;
    for(int j=0;j<n;++j){
        while(i<n && (curr + arr[i])<=t){
            curr+=arr[i];
            i++;
        }
        sum=max(sum,i-j);   // i-j should be maximum
        curr-=arr[j];
    }
    cout<<sum<<endl;
    return 0;
}