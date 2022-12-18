#include <iostream>
using namespace std;


void triabull(int N,int a[]){
	int i;
	
	int tmp,nb;
    do {
        nb=0;
        for (i=0; i<N-1; i++) {
            if (a[i] > a[i+1]) {
                tmp = a[i];
                a[i] = a[i+1];
                a[i+1] = tmp;
                nb++;
            }
        }
    } while (nb!=0);

	cout << "Voici le tableau trié :" << endl;
    for (i=0; i<N; i++) {
  	    cout << "a[" << i <<"]=" << a[i] << endl;
  	}
}
void triinsertion(int N,int a[]){
	int i,j;
	for(i=0; i<N; i++) {
        cout << "Veuillez taper l'entier numero " << i << " : ";
        cin >> a[i];
    }
	int tmp;
	for (i=1 ; i <= N-1; i++) {
    j = i;
 
    while (j > 0 && a[j-1] > a[j]) {
      tmp = a[j];
      a[j] = a[j-1];
      a[j-1] = tmp;
 
      j--;
    }
  }
  	for (i=0; i<N; i++) {
  	    cout << "a[" << i <<"]=" << a[i] << endl;
  	}
}
void triselection(int N,int a[]){
	int i,min,tmp;
	for(i=0; i<N; i++) {
        cout << "Veuillez taper l'entier numero " << i << " : ";
        cin >> a[i];
    }
	for(int i = 0 ; i < N-1 ; i++)
 	{
	 min = i; 
	 for(int j = i+1 ; j < N ; j++)
		 if(a[j] < a[min])
		 min = j;
		 if(min!=i)
			 {
			 //échanger t[i] et t[min]
			 tmp = a[i];
			 a[i]=a[min];
			 a[min]=tmp; 
			 }
	 } 
	}
void menu(){
	cout<<"1.tri a bull"<<endl;
	cout<<"2.tri a insertion"<<endl;
	cout<<"3.tri de selection"<<endl;
}
int main()
{	
    int N,c,a[30],i;
    
	cout<<"entrer le nombre des entiers a trier";
	cin>>N;
	for(i=0; i<N; i++) {
        cout << "Veuillez taper l'entier numero " << i << " : ";
        cin >> a[i];
    }
	menu();
	cout<<"entrer votre choix"<<endl;
	cin>>c;
	switch(c)
	  {
      case 1:
 	     cout<<"-------tri a bulles ---------"<<endl;
         triabull(N,a);
      break;
      case 2:
         cout<<"-------tri a insertion ---------"<<endl;
         triinsertion(N,a);
     break;
	case 3:
         cout<<"-------tri a selection ---------"<<endl;
         triselection(N,a);
     break;
    default :
         printf("\n Erreur verifier votre choix \n");
      break;
      }
  
    return 0;
}
