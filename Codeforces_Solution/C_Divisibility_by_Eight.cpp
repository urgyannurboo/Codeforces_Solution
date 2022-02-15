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
bool isNumber(const string& s)
{
    return all_of(s.begin(), s.end(),
                  [](char c){ return isdigit(c) != 0; });
}
int binExp(int a, int b){ 
    a %= mod;
    int ans = 1;
    while (b){
        if (b & 1){
          ans = (ans * a) % mod;
        }
       a = (a * a) % mod;
       b >>= 1;
    }
    return ans;
}
bool isPowerof2(int n){
    return !(n & (n - 1));
}
int countDigit(int n){
    return floor(log10(n) + 1);
}
/*
int main(){
    fastIO;
    //input
    string s;
    cin>>s;
    string s2 = s;
    int n = s.size();
    for(int i=0;i<n;++i){
        s2 = s;
        s2.erase(s2.begin()+i);
        if(s2.size()<=3){
            int x = stoi(s2);
            if(x%8==0){
                yes
                cout<<s2<<endl;
                return 0;
            }
        }
        else{
            int N = s2.size();
            int sum = (s2[N-1]-48) + (s2[N-2]-48) + (s2[N-3]-48);
            if(sum%8==0){
                yes
                return 0;
            }
        }
    }
    no
    return 0;
}
*/
int main() {
    string s;
    cin >> s;
    int len = s.length();
    string temp = "";
    for (int i = 0; i < len; ++i) {
        temp.pb(s[i]);
        if ([](string s){ return stoi(s)%8==0;}(temp)) {
            cout << "YES\n" << temp;
            return 0;
        }
        for (int j = i + 1; j < len; ++j) {
            temp.pb(s[j]);
            if ([](string s){ return stoi(s)%8==0;}(temp)) {
                cout << "YES\n" << temp;
                return 0;
            }
            for (int k = j + 1; k < len; ++k) {
                temp.pb(s[k]);
                if ([](string s){ return stoi(s)%8==0;}(temp)) {
                    cout << "YES\n" << temp;
                    return 0;
                }
                temp.pob();
            }
            temp.pob();
        }
        temp.pob();
    }
    no
    return 0;
}