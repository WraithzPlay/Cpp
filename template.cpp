/*
 * author : wraithzplay
 */

#include <bits/stdc++.h>
using namespace std;

#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define REP(i, j) FOR(i,0,j,1)
#define REV(i) for(int i=i;i >= 0;i--)
#define ALL(v) v.begin(),v.end()
#define CNT(v,t) count(ALL(v),t)
#define SRT(v) sort(ALL(v))
#define SZ(v) v.size()
#define FI first
#define SE second
#define MP make_pair
#define PB push_back
#define INF int(1e9)
#define MOD 1000000007
#define endl "\n";
#define YES printf("YES\n")
#define NO printf("NO\n")

const double PI = 3.141592653589;
const int MAX = INT_MAX;
const int MIN = INT_MIN;

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MI;
typedef set<int> SI;
typedef multiset<int> MSETI;
typedef long int LI;
typedef unsigned long int ULI;
typedef long long int LLI; 
typedef long long LL;
typedef unsigned long long int  ULLI;

inline int digit(int n) {
    return floor(log10(n)) + 1;
}

inline vector<string> split(string s){
    string tmp;
    VS out;
    for(int i = 0;s[i];i++){
        if(s[i] != ' ' || i == s.length() - 1) tmp += s[i];
        if(s[i] == ' ' || i == s.length() - 1){
            out.push_back(tmp);
            tmp = "";
        }
    }
    return out;
}

inline bool isOdd(int n){
    return n & 1;
}

inline int lcm(int a,int b){
    return a * b / __gcd(a,b);
}

void solve(){
    // Your Code :>
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
