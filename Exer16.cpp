//
// Created by Sissani on 3/13/18.
//

#include<iostream>
using namespace std;
 
int main()
{
    int x, s=0,nb=0;
    double moyenne;
    do{
        cout<<"Tapez un entier :";
        cin>>x;
        if(x>0){
            s=s+x;
            nb++;
        } else if(x<0)
            cout<<"ERREUR ";
 
    } while(x!=0);
 
    if(nb==0)
        cout<<"AUCUN ENTIER TAPE "<<endl <<"PAS DE MOYENNE"<<endl;
    else {
        moyenne=s/nb;
        cout<<"La moyenne vaut : "<<moyenne<<endl;
    }
    return 0;
}