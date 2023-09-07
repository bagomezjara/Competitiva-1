#include <stdlib.h>
#include <math.h>
#include <sstream>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;
typedef long long lint;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef vector<VS> VVS;
#define forn(i,n) for(int i=0;i<(n);i++)
#define forv(i,v) for(int i=0;i<(v).size();i++)
#define foru(i,a,b) for(int i=(a);i<=(b);i++)
#define ford(i,a,b) for(int i=(a);i>=(b);i--)
struct przz{};przz zz;
template<class T> przz operator,(przz a,T b){
  cout<<" "<<b;return a;
}
template<class T> T& operator<<(T& a,przz b){
  a<<endl;b=b;return a;
}
template<class T> T& operator<<(T& a,VI b){
  a<<"[";
  forv(i,b)a<<b[i]<<",";
  a<<"]";
  return a;
}
template<class T> T& operator<<(T& a,VS b){
  a<<endl;
  forv(i,b)a<<b[i]<<endl;
  a<<endl;
  return a;
}
string itos(int x){
  char b[32];
  sprintf(b,"%d",x);
  return string(b);
}
int stoi(const string& s){
  int r;
  sscanf(s.c_str(),"%d",&r);
  return r;
}
VS stovs(string s,string t=" "){
  VS res;
  for(int p=0;;){
    p=s.find_first_not_of(t,p);
    if (p<0) return res;
    int p2=s.find_first_of(t,p);
    res.push_back(s.substr(p,p2-p));
    if (p2<0) return res;
    p=p2;
  }
}
VI vstovi(const VS& v){
  VI res;
  forv(i,v)res.push_back(atoi(v[i].c_str()));
  return res;
}
VI stovi(string s,string t=" "){
  return vstovi(stovs(s,t));
}

bool testCol(VS& s,int c){
  forv(i,s)if(s[i][c]!=' ') return false;
  return true;
}

class TextColumns {
  public:
  vector <string> formatText(vector <string> tx) {
    int n=tx[0].size();
    VI vv;
    vv.push_back(0);
    int p=0;
    while(p<n){
      while(p<n&&testCol(tx,p)) p++;
      if (p>=n) break;
      while(p<n&&!testCol(tx,p)) p++;
      if (p+3<=n&&testCol(tx,p)&&testCol(tx,p+1)&&testCol(tx,p+2)){
        vv.push_back(p);
      }
    }
    vv.push_back(n);
    VS res;
    string cc="";
    forn(i,vv.size()-1){
      bool w=false;
      bool wl=false;
      forv(j,tx){
        VS vc=stovs(tx[j].substr(vv[i],vv[i+1]-vv[i]));
        if (!vc.size()) {
          wl=false;
          continue;
        }
        if (w&&!wl){
          if (cc!="") res.push_back(cc);
          cc="";
        }
        w=true;
        wl=true;
        forv(k,vc){
          if (cc!="") cc+=" ";
          cc+=vc[k];
        }
      }
    }
    if (cc!="") res.push_back(cc);
    return res;
  }
};
