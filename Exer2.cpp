//
// Created by baddi youssef on 3/13/18.
//

#include <iostream>

using namespace std;

int main(){
    int lar;
    int lon;
    cout<<"Veuillez entrer la longeur"<<endl;
    cin>>lon;
    cout<<"Veuillez entrer la largeur"<<endl;
    cin>>lar;
    cout<<"la surface est "<< lon * lar<<endl;
    cout<<"la primetre est "<< 2 * (lon + lar)<<endl;
}

