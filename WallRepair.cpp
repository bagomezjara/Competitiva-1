#include <iostream>
#include<vector>
#include<cstring>

using namespace std;

class WallRepair{
public:
    int bricksRequired(vector<string> wallRows);
};

int WallRepair::bricksRequired(vector<string> wallRows){
    int cont=0;
    for(int i=1;i<wallRows.size();i++){
        for(int j=0;j<wallRows[i].size();j++){
            if(wallRows[i-1][j]=='X' || wallRows[i-1][j]=='#'){
                if(wallRows[i][j]=='.'){
                    wallRows[i].replace(j,1,"#");
                    cont++;
                }
            }
        }
    }
    return cont;
}

int main(){
    vector<string> vec={
".........X............",
"......X..X..X..X......",
"X.......X..X.........X",
"....XXXXX..X.XXXXX...X",
".....X..X..X.........X",
"...X....X..X.........X",
".X...XX..X..X..X......",
".....X...X...XX......X"};
    WallRepair A;
    cout<<A.bricksRequired(vec)<<endl;
}
