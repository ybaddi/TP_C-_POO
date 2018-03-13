//
// Created by baddi youssef on 3/13/18.
//

#include <iostream>

using namespace std;
int serie(int n)
{
    if(n==0)
        return 3;
    else
        return 3*serie(n-1)+4;
}
int main(int argc, char** argv) {
    int n,u;
    cout<<"entrer la valeur de n"<<endl;
    cin>>n;
    u=serie(n);
    cout<<u<<endl;
    return 0;
}