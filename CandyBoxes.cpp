#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

class CandyBoxes{
public:
    int remainingCandies(vector<int> candies);
};

int CandyBoxes::remainingCandies(vector<int> candies){
    int minimo=INT_MAX, maximo=INT_MIN;
    for(std::size_t i=0;i<candies.size();i++){
        if(candies[i]<minimo){
            minimo=candies[i];
        }else if(candies[i]>maximo){
            maximo=candies[i];
        }
    }
    while(minimo!=maximo){
        std::replace(candies.begin(), candies.end(), maximo, (maximo-minimo));
        maximo=INT_MIN;
        for(std::size_t j=0;j<candies.size();j++){
            if(candies[j]<minimo){
                minimo=candies[j];
            }else if(candies[j]>maximo){
                maximo=candies[j];
            }
        }
    }
    return minimo;
}

int main(){
}
