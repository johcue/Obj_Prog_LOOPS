#include <iostream>
#include <cstdlib>
/*1. ESCRIBIR UN PRGRAMA QUE LEA N NUMEROS REALES DEL TECLADO 
Y ENCUENTRE EL PROMEDIO, EL MAXIMO Y EL MINIMO DE ESOS VALORES (DO-WHILE)*/
using namespace std;
int main(int argc, char** argv)
{
    int n, i, max, min;
    double d, sum=0, prom;
    char resp;
    do{
	system("cls");
	sum=0;
	i=1;
	prom=0;
	cout<<"\t MAXIMO, MINIMO Y PROMEDIO DE UN CONJUNTO DE N NUMEROS"<<endl;
	cout<<endl;
	cout<<"Por favor ingrese la cantidad n de datos a procesar ";
    cin>>n;
     do
     {
           cout<<"Por favor ingrese el "<<i<<" numero del conjunto: ";
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
     } while (i<=n);
     prom=sum/n;
	 cout<<endl<<"-El numero maximo es = "<<max<<endl<<"-El numero minimo es = "<<min<<endl<<"-Y el promdeio del conjunto es ="<<prom<<endl;
	 cout<<endl<<"Desea procesar otro conjunto? s/n ";
	 cin>>resp;
}while(resp=='s');
    system("pause");
    return 0;
}

