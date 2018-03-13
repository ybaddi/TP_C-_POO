#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int N;
	cout<<"Entrer un entier entre 0 et 20 : "<<endl;
	cin>>N;
	
	while(N<0 || N>20){
		cout<<"Erreur! Veiullez entrer un nombre entre 0 et et 20"<<endl;
		cin>>N;
	}
	cout<<N<<" +17 = "<<N+17<<endl;
	
	return 0;
}
