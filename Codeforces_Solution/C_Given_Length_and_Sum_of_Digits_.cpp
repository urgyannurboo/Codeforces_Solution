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
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int m, s, t, i;
    cin >> m >> s;
    string a, b;
    if (s == 0)
    {
        cout << (m == 1 ? "0 0" : "-1 -1") << endl;
        return 0;
    }

    for (i = 0; i < m; i++)
    {
        t = min(s, 9);
        b += t + '0';
        s -= t;
    }

    if (s > 0)
    {
        cout << "-1 -1" << endl;
        return 0;
    }

    for (i = m - 1; i >= 0; i--)
        a += b[i];
    for (i = 0; a[i] == '0'; i++);
    a[i]--, a[0]++;
    cout << a << " " << b << endl;
    return 0;
}