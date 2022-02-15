
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
int ans = 0;
vector<vector<int> > findPowerSet(vector<int> nums)
{
	int bits = nums.size();	 
	unsigned int pow_set_size = pow(2, bits);	
	sort(nums.begin(), nums.end());	 /
	vector<vector<int>> ans;
	vector<string> list;	
	for (int counter = 0; counter < pow_set_size; counter++) {
		vector<int> subset;
		string temp = "";

		for (int j = 0; j < bits; j++) {
			if (counter & (1 << j)) {
				subset.push_back(nums[j]);
				temp += to_string(nums[j]) + '$';
			}
		}
	
		if (find(list.begin(), list.end(), temp) == list.end()) {
			ans.push_back(subset);
			list.push_back(temp);
		}
	}

	return ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
	vector<vector<int> > power_set = findPowerSet(arr);

	return 0;
}
