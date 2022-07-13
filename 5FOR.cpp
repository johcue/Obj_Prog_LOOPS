#include <iostream>
#include <cstdlib>
/*5. ELABORAR UN PROGRAMA QUE LEA UN NUMERO N POR TECLADO Y 
NOS DIGA LA DISTANCIAS ENTRE CADA PAR DE PRIMOS CONTIGUOS MENORES QUE N (FOR).*/
using namespace std;

bool primo(int h)
{
	int div=0, m=1;
	while (m<=h)
	{
		if (h%m==0)
			div++;
		m++;
	}
	if (div==2||h==1)
		{
			return true;
		}
	else
		{
			return false;
		}
}

void distancia_primos(int n)
{
    int i=1, j=0, d[100];
	cout<<endl;
	if(n<0)
	{
		cout<<"El numero DEBE ser natural"<<endl;
	}
	else	
	{
		j=0;
		for (i=1;i<=n;i++)
		{
			if (primo(i))
			{
				d[j]=i;
				j++;
			}
		}
		cout<<endl;
		for (i=0;i<j-1;i++)
		{
			cout<<"Entre "<<d[i]<<" y "<<d[i+1]<<" los separa una distancia igual a "<<d[i+1]-d[i]<<endl;
		}
	}
}


int main(int argc, char** argv)
{
	int n;
	char resp;
	do
	{
	system("cls");
	cout<<"\t \t DISTANCIAS ENTRE NUMEROS PRIMOS"<<endl;
	cout<<"\t \t MENORES CONTIGUOS AL INGRESADO"<<endl;
	cout<<"Por favor ingrese el numero a procesar ";
	cin>>n;
	distancia_primos(n);
	cout<<endl<<"Desea procesar otro numero? s/n ";
	cin>>resp;
 }while(resp=='s');
	system("pause");
	return 0;
}

