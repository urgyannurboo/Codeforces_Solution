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
#define int long long 
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
#define tc   int t;     cin>>t;   while(t--)
#define INF 1000000000000000003
#define in(x) cin >> (x)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define mod 256;
#define input  freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int gcd(int a, int b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
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
int log2(int x){int res = 0;while (x >>= 1)res++;return res;}
int binarySearch( int a[] , int l, int r, int x) { while (l <= r) {  int m = l + (r-l)/2; if (a[m] == x) return m; if (a[m] < x) l = m + 1;else r= m - 1;}}
signed main(){
    fastIO;
    //input;
    tc{
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(ALL(v));
        int h= n/2;
        if(n%2 == 0)
            h--;
        int i=0;
        int sum1=0,sum2=0;
        if(n%2 == 1)
        {
            for(i=0; i<n-h; i++){
                sum1+=v[i];
            }
            for(i; i<n; i++){
                sum2+=v[i];
            }
            if(sum2>sum1)
                yes
            else
                no
        }
        else
        {
            for(i=0; i<n-h-1; i++){
                sum1+=v[i];
            }
            i++;
            for(i; i<n; i++){
                sum2+=v[i];
            }
            if(sum2>sum1)
               yes
            else
               no
        }
    }
}
