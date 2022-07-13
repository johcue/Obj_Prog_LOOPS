#include <iostream>
#include <cstdlib>
#include <math.h>
/* 6. ESCRIBA UN PPROGRAMA QUE DE EL VALORDE e^x MEDIANTE LA APROXIMACION DE SERIES DE TAYLOR */
using namespace std;

int fact(int tope)
	{
		int sumatoria=0,i=1;
		do
		{
			sumatoria=sumatoria+i;
			i++;
		}while(i<=tope);
		
		return (sumatoria);	
	}

int exp(int x)
{
    int z;
    double e=0,m=0;
    e=0;
    for (z=0;z<=20;z++)
    {
        e=(pow(x,z))/(fact(z));
        m+=e;
      
    }
    return m;
}


int main(int argc, char** argv)
{                        
    int n;
    double x, expo;
    char resp;
    do{
    system("cls");
    expo=0;
    cout<<"\t FUNCION EXPONENCIAL POR SERIES DE TAYLOR"<<endl;
	cout<<"Por favor ingrese el numero a procesar ";
    cin>>x;
	expo=exp(x);                
    cout<<"El valor de la funcion exponencial es: "<<expo<<endl;
    cout<<endl<<"Desea procesar otro numero? s/n ";
	cin>>resp;
    }while(resp=='s');
    system("PAUSE");
    return 0;
}
