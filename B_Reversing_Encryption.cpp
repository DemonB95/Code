#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef long long int  lli;
#define pb push_back 
#define va v.begin(),v.end()
#define vd v.begin(),v.end(),greater<ll>()
#define vi vector<int> 
#define vll vector<long long >
#define pb push_back 
#define pii pair<int,int> 
#define si set<int>
#define sll set<long long>
#define endl "\n"
#define rep(i,a,b) for(ll i = a; i < b; i++)
#define demonb95 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    rep(i,0,n)
    {
        if(n%(i+1)==0)
        {
            reverse(s.begin(),s.begin()+i+1);
        }
    }
    cout<<s<<endl;
 
}
int main()
{
demonb95;
  
ll t=1;
//cin>>t;
while(t--)
{
 solve(); 
}
return 0;
}