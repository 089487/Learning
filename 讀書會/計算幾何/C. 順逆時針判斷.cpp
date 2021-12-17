//Author: Woody
#include<bits/stdc++.h>
#define eb emplace_back
#define F first
#define S second
#define mp make_pair
#define quick ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
const int N=2e5+7;
pii v[N];
pii p[N];
ll cross(pii a,pii b){
  return a.F*b.S-b.F*a.S;
}
pii Vector(pii a,pii b){
  return mp(a.F-b.F,a.S-b.S);
}
signed main(){
  quick
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>p[i].F>>p[i].S;
  }
  p[n]=p[0];
  ll sum=0;
  for(int i=1;i<=n;i++){
    sum+=cross(p[i-1],p[i]);
  }
  assert(sum!=0);
  if(sum>0){
    cout<<"OwO\n";
  }
  else cout<<"OAO\n";
}