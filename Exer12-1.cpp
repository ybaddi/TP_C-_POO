//
// Created by Hariti on 3/13/18.
//

#include<iostream>
using namespace std;
 

int main() {
        int i,u=3,N;
        cout<<"Tapez N : ";cin>>N;
        for(i=0;i<N;i++)
                u=u*3+4;
        cout<<"u("<<N<<")="<<u<<endl;
        return 0;
}
