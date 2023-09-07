#include <iostream>
#include<vector>
#include<cstring>

using namespace std;

class StrangeComparator{
public:
    vector<string> compareString(vector<string> a, vector<string> b);
};

vector<string> StrangeComparator::compareString(vector<string> a, vector<string> b){
    vector<string> r;
    for(int i=0;i<a.size();i++){
        int errors=0;
        if(a[i].size()!=b[i].size()){
            r.push_back("No");
        }else{
            for(int j=0;j<a[i].size();j++){
                if(a[i][j]!=b[i][j]){
                    errors++;
                }
            }
            if(errors>1){
                r.push_back("No");
            }else{
                r.push_back("Yes");
            }
        }
    }
    return r;
}

int main(){
    vector<string> a={"", "abc", "bde", "ahsdjka"};
    vector<string> b={"", "qbp", "fde", "ahsdjka"};
    StrangeComparator A;
    vector<string> c=A.compareString(a,b);
    for (int i=0; i<c.size(); i++){
        cout<<c[i]<<endl;
    }
}
