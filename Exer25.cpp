//
// Created by naimy on 3/13/18.
//

#include <iostream>

using namespace std;
int suite(int a ){
    int i,u=a ;
   for(i=0;;i++){
       if (u % 2 == 0){
           u = u/2 ;
           cout<< u << endl ;
       }
        else{
            u = 3*u+1;
            cout<< u << endl;
        }
        if (u==1) break ;
    }
}
int main()
{
    int x=0;
    cout << "entrer  la valeur de a" << endl;
    cin>>x ;
    suite(x);
    return 0;
}
