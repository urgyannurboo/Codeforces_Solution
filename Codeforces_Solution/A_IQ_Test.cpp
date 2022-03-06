/*

██╗   ██╗██████╗  ██████╗██╗   ██╗ █████╗ ███╗   ██╗        
██║   ██║██╔══██╗██╔════╝╚██╗ ██╔╝██╔══██╗████╗  ██║        
██║   ██║██████╔╝██║  ███╗╚████╔╝ ███████║██╔██╗ ██║        
██║   ██║██╔══██╗██║   ██║ ╚██╔╝  ██╔══██║██║╚██╗██║        
╚██████╔╝██║  ██║╚██████╔╝  ██║   ██║  ██║██║ ╚████║        
 ╚═════╝ ╚═╝  ╚═╝ ╚═════╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═══╝

*/                                                                        
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
#ifdef Urgyan
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif
#define input  freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
bool isNumber(const string& s){return all_of(s.begin(), s.end(),[](char c){ return isdigit(c) != 0; });}
int Bin_Exp(int a, int b){ a %= mod;
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
bool isPowerof2(int n){return !(n & (n - 1));}
int countDigit(int n){ return floor(log10(n) + 1);}
void setBit(int &num,int pos){ num |= (1 << pos);}
void unsetBit(int &num,int pos){ num &= (~(1 << pos));}
void toggle(int &num,int pos){ num ^= (1 << pos);}
bool check_bit(int num,int pos){ bool bit = num & (1<<pos);return bit;}
int countSetBits(int x){
    int count = 0;
    while (x){
        x &= (x-1);
        count++;
    }
    return count;
}
int log2(int x){int res = 0;while (x >>= 1)res++;return res;
}
int main(){
    fastIO;
    //input;
    /*
    vector<string> vs(4);
    for (int i = 0; i < 4; ++i)
    {
        cin >> vs[i];
    }
    bool flag = false;
    for (int i = 0; i <= 2 && !flag; ++i)
    {
        for (int j = 0; j <= 2; ++j)
        {
            int dot = 0;
            for (int r = 0; r < 2; ++r)
            {
                for (int c = 0; c < 2; ++c)
                {
                    if (vs[i+r][j+c] == '.')
                    {
                        dot += 1;
                    }
                }
            }
            if (dot != 2)
            {
                flag = true;
                break;
            }
        }
    }
    cout << (flag ? "YES" : "NO") << endl;
    */
   string s[4];
   cin >> s[0] >> s[1] >> s[2] >> s[3];

    for (int i = 0; i <= 2; i++)
        for (int j = 0; j <= 2; j++)
        {
            int d = 0, p = 0;
            for (int k = 0; k < 2; k++)
                for (int l = 0; l < 2; l++)
                    if (s[i + k][j + l] == '.') d++;
                    else p++;
            if ((d == 3 and p == 1) or (d == 1 and p == 3) or (d == 4) or (p == 4))
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    cout << "NO" << endl;
    return 0;
}
