#include <iostream>
#include <cstdlib>
/* 8. EL PRIMER COCHE ESTA A 70 KILOMETROS EN LA CARRETERA PEREIRA-CALI
OTRO SE ENCUENTRA 150 KILOMETROS DE LA MISMA CARRETERA, EL PRIMERO VIAJA
EN DIRECCION A CALI, MIENTRAS QUE LA SEGUNDA SE DIRIGE A PEREIRA, A LA
MISMA VELOCIDAD. EN QUE KILOMETRO DE LA CARRETERA SE ENCONTRARAN? (WHILE)*/
using namespace std;
int main(int argc, char** argv) 
{
	int d1,d2;
	char resp;
	do
	{
	system("cls");
	cout<<"\t DISTANCIA DE ENCUENTRO"<<endl;
	cout<<"Por favor ingrese la distancia del primer coche ";
	cin>>d1;
	cout<<"Ahora, por favor ingrese la distancia del segundo coche ";
	cin>>d2;
	if(d1<d2)
	{
		while(d1<d2)
	{
		d1=d1+1;
		d2=d2-1;
	}
	cout<<endl<<"Los Coches se encontraran en el kilometro "<<d1<<endl;
	}
	else
	if(d1>d2)
	{
		while(d1>d2)
	{
		d2=d2+1;
		d1=d1-1;
	}
	cout<<endl<<"Los Coches se encontraran en el kilometro "<<d1<<endl;	
	}
	else
	{
		cout<<endl<<"Los coches estan en el mismo tramo de ruta"<<endl;
	}
	cout<<endl;
	cout<<endl<<"-Desea procesar otras distancias? s/n ";
	cin>>resp;
 }while(resp=='s');
	system ("pause");
	return 0;
}


