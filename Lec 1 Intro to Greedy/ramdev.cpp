/* Problem -RAMDEV
   Platform -CodeChef
   Solution by - Raman Mehta
*/

#include <bits/stdc++.h>
#define endl  "\n"
#define pb push_back
#define ll long long
#define ull unsigned long long
#define vi  vector<int>
#define pi pair<int,int>
#define f first
#define s second
#define mp make_pair
#define sp(x,y) fixed<<setprecision(y)<<x
#define FIO  ios::sync_with_stdio(0); cin.tie(0);
#define rep(i,a,b) for (int i = a; i < b; i++)
using namespace std;

int main() {
    FIO
    int l,b; cin>>l>>b;
    int n; cin>>n;
    ll L,B,ans=0;;
    while(n--){
        cin>>L>>B;
        
        ans+=max((L/l)*(B/b),(L/b)*(B/l));
        
    }
    cout<<ans<<endl;
	
	return 0;
}
