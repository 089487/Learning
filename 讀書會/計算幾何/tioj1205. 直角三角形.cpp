//Author: Woody
#include<bits/stdc++.h>
#define eb emplace_back
#define F first
#define S second
#define mp make_pair
#define quick ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
const int N=1507;
pii pos[N];
map<pii,int> m;
pii Reverse(pii a){
  a.S*=-1;
  if(a.S<0) a.F*=-1,a.S*=-1;
 // cout<<a.S<<","<<a.F<<"Reverse\n";
  return mp(a.S,a.F);
}
int gcd(int a,int b){
 // cout<<a<<" "<<b<<" "<<"gcd\n";
  if(!b) return a;
  return gcd(b,a%b);
}
pii Vector(pii a,pii b){
  a.F-=b.F;
  a.S-=b.S;
  int k=gcd(abs(a.F),abs(a.S));
  a.F/=k;
  a.S/=k;
  if(a.S<0) a.F*=-1,a.S*=-1;
  if(a.F<0) a.F*=-1,a.S*=-1;
  return a;
}
signed main(){
  quick
  int n;
  while(cin>>n&&n){
    for(int i=0;i<n;i++){
      cin>>pos[i].F>>pos[i].S;
    }
    ll ans,cnt;
    ans=0;
    for(int i=0;i<n;i++){
      m.clear();
      cnt=0;
      for(int j=0;j<n;j++){
        if(i==j) continue;
        pii l=Vector(pos[i],pos[j]);
        m[l]++;
      }
      for(auto P:m){
        //cout<<P.F.F<<","<<P.F.S<<":"<<P.S<<"\n";
        cnt+=P.S*1LL*(m[Reverse(P.F)]);
      }//cout<<i<<"i"<<cnt/2<<"cnt\n";
      ans+=cnt/2;
    }
    cout<<ans<<"\n";
  }
}
  