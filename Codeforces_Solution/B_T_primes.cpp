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
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define U unsigned int
#define endl "\n"
const int MOD = 1000000007;
const int MAX = 1000001;
bool prime[MAX];
void sieve ()
{
    int i,j;
    prime[0] = prime[1] = true;
    for (i=4; i<MAX; i+=2)
        prime[i] = true;
    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;
}

int main (void)
{
    sieve ();
    ll n,r;
    tc{
        cin>>n;
        r = sqrt(n);
        if (!prime[r] && r*r == n)
           cout<<"YES"<<endl;
        else
           cout<<"NO"<<endl;
    }
    return 0;
}