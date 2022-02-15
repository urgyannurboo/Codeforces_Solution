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
int main(){
    fastIO;
    string s1,s2;
    int ls1,ls2;
    char ch1,ch2;
    cin>>s1>>s2;
    ls1 = s1.size();
    ls2 = s2.size();
    if (ls1 != ls2)
            no
        else
        {
            int k = 0;
            int p = 0;
            for (int i=0;i<ls1;i++)
            {
                if (s1[i]!= s2[i])
                {
                    ++k;
                    if (k == 1)
                    {
                         ch1 = s1[i];
                         ch2 = s2[i];
                    }
                    else if (k == 2)
                    {
                        if (s1[i] == ch2 && s2[i] == ch1)
                            p = 1;
                    }
                    else
                        break;
                }
            }

            if (p == 1 && k == 2)
                yes
            else
                no
        }
    }