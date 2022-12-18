#include<iostream>
using namespace std;

class Point{
	private:
		double  x,y;
	protected:
		string nom;
	public:
		Point(double x=0,double y=0,string nom=''){
			this->x=x;
			this->y=y;
			this->nom=nom;
		}
		double getX(){
			return x;
		}
		void setX(double x){
			this->x=x;
		}
		double getY(){
			return y;
		}
		void setY(double y){
			this->y=y;
		}
		string getNom(){
			return nom;
		}
		void setNom(string nom){
			this->nom=nom;
		}
		void Afficher(){
			cout<<"x= "<<x<<" y= "<<y<<" nom: "<<nom;
		}
};
class PointCouleur:public Point{
	private:
		unsigned int couleur;
	public:
		PointCouleur(double x=0,double y=0,string nom='',unsigned int couleur=0):Point(x,y,nom){
			this->couleur=couleur;
		}
		unsigned int getcouleur(){
			return couleur;
		}
		void setcouleur(unsigned int couleur){
			this->couleur=couleur;
		}
		void Afficher(){
			Point :: Afficher;
			cout<<"couleur= "<<couleur;
		}
		
};
