#include <iostream>
#include <string.h>
#include <sstream>
#include <algorithm>

using namespace std;

class EllysTimeMachine{
public:
    string getTime(string time);
};

string EllysTimeMachine::getTime(string time){
    int hour,minute;
    sscanf(time.c_str(),"%d:%d",&hour,&minute);
    hour=hour*5;
    if(hour==60){
        hour=0;
    }
    minute=minute/5;
    if(minute==0){
        minute=12;
    }
    char travel[4];
    sprintf(travel,"%02d:%02d",minute,hour);
    return travel;
}

int main(){
    string a={"1:00"};
    EllysTimeMachine A;
    cout<<A.getTime(a)<<endl;
}
