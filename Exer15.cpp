//
// Created by Hariti on 3/13/18.
//

#include<iostream>
using namespace std;
 
int main()
{
    int a=0,choix;
    do
    {
        cout<<"a vaut "<<a<<endl;
        cout<<"1 : Ajou 1"<<endl;
        cout<<"2 : Multi par 2"<<endl;
        cout<<"3 : Soust 4"<<endl;
        cout<<"4 : Quitter"<<endl;
        cout<<"Votre choix : ";cin>>choix;
        switch(choix)
        {
            case 1 : a=a+1;
                break;
            case 2:
                a=a*2;
                break;
            case 3:
                a=a-4;
                break;
            default:
                cout<<"votre choix n'exist pas"<<endl;
                break;
        }
    }while(choix!=4);
return 0;
}
