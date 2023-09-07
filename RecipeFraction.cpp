#include <iostream>
#include<vector>
#include<cstring>
#include <sstream>

using namespace std;

class RecipeFraction{
public:
    double getFraction(vector<string> recipe, vector<string> ingredients);
};

double RecipeFraction::getFraction(vector<string> recipe, vector<string> ingredients){
    double fin=0;
    double sum=0,fsum=0;
    vector<string> ffood;
    vector<int> fcant;
    for(int i=0;i<recipe.size();i++){
        int cant;
        char food[50];
        sscanf(recipe[i].c_str(),"%d %s",&cant,&food);
        fcant.push_back(cant);
        ffood.push_back(food);
        sum+=cant;
    }
    for(int j=0;j<ingredients.size();j++){
        for(int k=0;k<ffood.size();k++){
            if(ingredients[j]==ffood[k]){
                fsum+=fcant[k];
            }
        }
    }
    fin=(fsum/sum);
    return fin;
}

int main(){
    vector<string> a={"2 GRAPES",
 "1 APPLES",
 "3 STRAWBERRIES"};
    vector<string> b={"FROGS"};
    RecipeFraction A;
    cout<<A.getFraction(a,b)<<endl;
}
