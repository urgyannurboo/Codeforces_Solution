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
void solve(){
    int n;
	cin>>n;
	vi v(n);
    vi b(n);
    for(int i = 0; i < n; i++) {
		in(v[i]);
		b[i] = v[i];
	}
	map<int, int> mp;
	sort(ALL(b));
	for (int i = 0; i < n; i++) {
		mp[b[i]] = i;
	}
	for (int i = 0; i < n; i++) {
		v[i] = mp[v[i]];
	}
    int idx1 = -1;
    int idx2 = -1;
    for(int i=0;i<n;++i){
        if(v[i]!=i){
            idx1 = i;
            break;
        }
    }
	for (int i = n - 1; i >= 0; i--) {
		if (v[i] != i) {
			idx2 = i;
			break;
		}
	}
	if (idx1 == -1 || idx2 == -1) {
		cout << "yes" << endl;
		cout << 1 << " " << 1 << endl;
	} else {
		reverse(v.begin()+idx1,v.begin() + idx2 + 1);
        int flag = 1;
		for (int i = 0; i < n; i++) {
			if (v[i] != i) {
				flag=0;
			}
		}
		if(flag){
        	cout << "yes" << endl;
			cout << idx1 + 1 << " " << idx2 + 1 << endl;
		} 
        else {
			cout << "no" << endl;
		}
	}
    return;
}
int main()
{
    fastIO;
	solve();
    return 0;
}