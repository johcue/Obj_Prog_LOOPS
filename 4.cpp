#include <iostream>
#include <cstdlib>
#include <math.h>
/*4.SE SABE QUE n^2= 1+3+5+7+2n-1. SE PIDE LEER UN NÚMERO Y CALCULAR SU CUADRADO HACIENDO USO DE ESTA RELACIÓN (FOR). */
using namespace std;
int main(int argc, char** argv)
{
	int n,i,c,g;
	char resp;
	do{
	system("cls");
	cout<<"SERIE DE UN NUMERO AL CUADRADDO"<<endl;
	cout<<"Por favor digite el numero ";
	cin>>n;
	c=0;
	g=((2*n)-1);
	for(i=1;i<=g;i+=2)
	{
		c=c+i;
		cout<<i;
		if (i!=2*n-1)
			{
				cout<<" + ";

			}
	}
	cout<<endl<<"--->El resultado es "<<c<<endl;
	cout<<endl<<"Desea procesar otro conjunto? s/n ";
	cin>>resp;
}while(resp=='s');
	system("pause");
	return 0;
}
