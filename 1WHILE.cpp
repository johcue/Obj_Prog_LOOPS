#include <iostream>
#include <cstdlib>
/*1. ESCRIBIR UN PRGRAMA QUE LEA N NUMEROS REALES DEL TECLADO 
Y ENCUENTRE EL PROMEDIO, EL MAXIMO Y EL MINIMO DE ESOS VALORES (WHILE)*/
using namespace std;
int main(int argc, char** argv)
{
    int n, max, i, min;
    double d, sum, prom;
    char resp;
    do
	{
	system("cls");

	sum=0;
	i=0;
	prom=0;
	cout<<"\t MAXIMO, MINIMO Y PROMEDIO DE UN CONJUNTO DE N NUMEROS"<<endl;
	cout<<endl;
	cout<<"Por favor ingrese la cantidad n de datos a procesar ";
    cin>>n;
    while (i<n)
    {
     cout<<"Por favor ingrese el "<<i+1<<" numero del conjunto: ";
            cin>>d; 
            if (i==1)
             {
                max=d; 
                min=d; 
             }
             sum += d; 
            if (max<d)
             { 
               max=d;
	         }
            if (min>d)
             { 
               min=d;
	         }
     i++;
    }
    prom=sum/n;
		  cout<<endl<<"-El numero maximo es = "<<max<<endl<<"-El numero minimo es = "<<min<<endl<<"-Y el promdeio del conjunto es ="<<prom<<endl;
	 cout<<endl<<"Desea procesar otro conjunto? s/n ";
	 cin>>resp;
 }while(resp=='s');
    system("pause");
    return 0;
}

