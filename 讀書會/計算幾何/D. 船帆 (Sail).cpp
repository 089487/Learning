#include<bits/stdc++.h>
using namespace std;
double L,a,b,c;
double cal(double x){
  return L*sin(x)*a+L*cos(x)*b;
}
double islower(double a,double b){
  return abs(cal(a)-c)<=abs(cal(b)-c);
}
double tsearch(double l,double r){
  for(int i=0;i<100;i++){
    double lx=(l*2+r)/3;
    double rx=(l+r*2)/3;
    if(islower(lx,rx)) r=rx;
    else l=lx;
  }
  return l;
}
signed main(){
  int t;
  cin>>t;
  while(t--){ 
    double l,r;
    cin>>L>>a>>b>>c>>l>>r;
    cout<<fixed<<setprecision(20)<<tsearch(l,r)<<"\n";
   }
}