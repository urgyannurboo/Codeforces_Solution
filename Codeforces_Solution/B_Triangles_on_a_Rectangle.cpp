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
#define input  freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
bool isNumber(const string& s)
{
    return all_of(s.begin(), s.end(),
                  [](char c){ return isdigit(c) != 0; });
}
int Bin_Exp(int a, int b){ 
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
void setBit(int &num,int pos){
    num |= (1 << pos);
}
void unsetBit(int &num,int pos){
    num &= (~(1 << pos));
}
void toggle(int &num,int pos){
    num ^= (1 << pos);
}
bool check_bit(int num,int pos){
    bool bit = num & (1<<pos);
    return bit;
}
int countSetBits(int x){
    int count = 0;
    while (x){
        x &= (x-1);
        count++;
    }
    return count;
}
int log2(int x){
    float res = 0;
    while (x >>= 1)
        res++;
    return res;
}
int main(){
    fastIO;
    tc{
        int h,w;
        cin>>w>>h;
        int k1;
        cin>>k1;
        vi x1(k1);
        for(auto &i:x1) in(i);
        int k2;
        cin>>k2;
        vi x2(k2);
        for(auto &i:x2) in(i);
        int k3;
        cin>>k3;
        vi y1(k3);
        for(auto &i:y1) in(i);
        int k4;
        cin>>k4;
        vi y2(k4);
        for(auto &i:y2) in(i);
        int max1=0,max2=0,max11=0,max22=0;
        for(int i=0;i<k1-1;++i){
            for(int j=i+1;j<k1;++j){
               max1 = max(x1[j]-x1[i],max1);
            }
        }
        for(int i=0;i<k2-1;++i){
            for(int j=i+1;j<k2;++j){
               max11 = max(x2[j]-x2[i],max11);
            }
        }
        for(int i=0;i<k3-1;++i){
            for(int j=i+1;j<k3;++j){
               max2 = max(y1[j]-y1[i],max2);
            }
        }
        for(int i=0;i<k4-1;++i){
            for(int j=i+1;j<k4;++j){
               max22 = max(y2[j]-y2[i],max22);
            }
        }
        int ans1=0,ans2=0;
        ans1 = max(max1,max11);
        ans2 = max(max2,max22);
        if(ans1>ans2){
            cout<<ans1*h<<endl;
        }
        else if(ans1==ans2){
            cout<<ans1*max(h,w)<<endl;
        }
        else{
            cout<<ans2*w<<endl;
        }
    }
}
