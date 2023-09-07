#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

static char remote[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890$.,-!?:/+()*@&%#=<> ";
class TVRemoteText{
public:
    int numPresses(string text);
};

int TVRemoteText::numPresses(string text){
    int resolve=0;
    int actx=0,acty=0,antx=0,anty=0;
    for(int i=0;i<text.size();i++){
        for(int j=0;j<sizeof(remote);j++){
            if(acty==7){
                acty=0;
                actx++;
            }
            if(text[i]==remote[j]){
                resolve++;
                break;
            }
            acty++;
        }
        resolve+=abs(actx-antx)+abs(acty-anty);
        antx=actx;
        anty=acty;
        actx=0;
        acty=0;
        if(text[i]==remote[anty*(antx+1)]){
            continue;
        }
    }
    resolve++;
    return resolve;
}

int main(){
    string a="2B+-2B,THAT=? 3177 $H4K5P3R3";
    TVRemoteText A;
    cout<<A.numPresses(a)<<endl;
}
