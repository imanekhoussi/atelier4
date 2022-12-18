#include <iostream>
#include <list>
using namespace std;

class Personne {
public :
	string nom;
	string prenom;
	int age ;
	Personne(string nom ,string prenom, int age ){
		this->nom = nom ;
		this->prenom =prenom ;
		this->age = age;
		}

};

int main()
{
string nom;
string prenom;
int age ;
int nbr;
list<Personne> data;
cout<<"entrer le nombre de personne a stocker"<<endl;
cin>>nbr;
for (int i = 0; i < nbr; ++i)
{
	cout<<"entrer prenom "<<i+1<<endl;
	cin>>prenom;
	cout<<"entrer nom "<<i+1<<endl;
	cin>>nom;
	cout<<"entrer age "<<i+1<<endl;
	cin>>age;

data.push_back(Personne(prenom , nom,age ));

}
list <Personne> :: iterator it;
for (it = data.begin(); it != data.end(); ++it){
	
	cout << it->nom<<" ";
	cout << it->prenom<<" ";
	cout << it->age<<"ans"<<endl;
	}
return 0;
}
