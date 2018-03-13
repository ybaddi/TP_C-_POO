//
// Created by IHHIHI on 3/13/18.
//
#include <iostream>

using namespace std;

int main() {
    int i,u=1,v=1,w,N;
    cout<<"entrer  un nombre: ";
    cin>>N;
    w=1;
    for(i=2;i<=N;i++) {
        w=u+v;
        u=v;
        v=w;
    }
    cout<<"u("<<N<<")="<<w<<endl;
    return 0;
}
