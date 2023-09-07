#include<iostream>
#include<vector>

using namespace std;

class Chooser{
public:
    int numSets(vector<int> easy, vector<int> middle, vector<int> hard);
};

int Chooser::numSets(vector<int> easy, vector<int> middle, vector<int> hard){
    int a=easy.size();
    int b=middle.size();
    int c=hard.size();
    if(a==0 || b==0 || c==0){
        return 0;
    }else{
        int comb=a*b*c;
        for(std::size_t i=0;i<a;i++){
            for(std::size_t j=0;j<b;j++){
                for(std::size_t k=0;k<c;k++){
                    if(easy[i]+middle[j]+hard[k]<60 || easy[i]+middle[j]+hard[k]>75){
                        comb--;
                    }
                }
            }
        }
        return comb;
    }
}

int main(){
}
