#include <iostream>
#include <string>

using namespace std;

void afficherDateEtHeure(string s)
{
    if ( s.length() != 12 )
        cerr << "Il faut entrer 12 caractere" << endl;//afficher sil ya un erreur
    else
    {
        cout << "Date  : " 
		<< s.substr(0,2) //le jour commence par le chiffre de pos 0 et contient 2 caracteres dans sa longeur
		<< "/" 
		<< s.substr(2,2) //le mois commence par le chiffre de pos  2 et contient 2 caracteres dans sa longeur
		<< "/" 
		<< s.substr(4,4) << endl; //annee commence par le chiffre de pos 4 et contient 4 caracteres dans sa longeur
        cout << "Heure : " 
		<< s.substr(8,2) // heure commence par le chiffre de pos  8 et contient 2 caracteres dans sa longeur
		<< ":" << s.substr(10,2) << endl; // min commence par le chiffre de pos  1 et contient 2 caracteres dans sa longeur
    }
}
int main(){
	string c;
	
	cout<<"Entrer un chaine"<<endl;
	cin>>c;
	
	
	afficherDateEtHeure(c);
}
