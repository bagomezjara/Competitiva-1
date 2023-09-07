#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class AdvertisingAgency{
public:
    int numberOfRejections(vector<int> requests);
};

int AdvertisingAgency::numberOfRejections(vector<int> requests){
    int bilboard[101]={ 0 };
    int rejected=0;
    for(int i=0;i<requests.size();i++){
        if(bilboard[requests[i]]!=0){
            rejected++;
        }else{
            bilboard[requests[i]]=1;
        }
    }
    return rejected;
}

int main(){
    vector<int> a={100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    AdvertisingAgency A;
    cout<<A.numberOfRejections(a)<<endl;
}
