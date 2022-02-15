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
int cnt_ones(int val) 
{ 
	int ret=0; 
	while(val>0) 
	{ 
		ret++; 
		val=val&(val-1); 
	} 
	return ret; 
} 
// if the original two numbers are X and Y 
//then the number of different bits 
//would be equal to the 
//number of ones in the number X  xor  Y , 
//where xor is the exclusive or operation.
int main() 
{ 
	fastIO;
    int n,m,k;
	cin>>n>>m>>k; 
	vi v(m); 
	int i,fredor,friends=0; 
	for(int &i : v) in(i);
	in(fredor);
	loop(m) if(cnt_ones(fredor^v[i])<=k) friends++; 
	cout << friends << endl;
	return 0; 
} 