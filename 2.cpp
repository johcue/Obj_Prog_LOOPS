#include <iostream>
#include <cstdlib>
#include <conio.h> //Getche Lee espacios y tiene echo
/*2. LEER UNA FRASE DEL TELADO CARACTER POR CRACTER, HASTA QUE SE PULSE LA TECLA <ENTER>.
INDICA CUANTAS VOCALS TIENE LA FRAS, NUMERO DE CONSONANTES Y EL NUMERO DE OTROS CARACTERES (DO-WHILE).*/
using namespace std;
int main(int argc, char** argv)
{
    int cons, voc, otr, esp, i, total=0; 
    char T[10000], j;
    cons=0;
    voc=0;
    otr=0;
    esp=0;
    i=0;
    total=0;
	cout<<"\t IDENTIFICADOR Y CONTADOR DE CARACTERES"<<endl;
	cout<<endl;
	cout<<"Por favor ingrese el texto a procesar"<<endl<<endl;
	cout<<">>INICIO: ";
	do
	{
		T[total]=getche();
		j=toupper(T[total]); 
		if (j!=' ')
		{
			if((j=='A'||j=='E'||j=='I'||j=='O'||j=='U'))
				{
					voc++;
				}
			else if (j>=65&&j<=90)
				{
					cons++;
				}
		}
		else 
			{
			   esp++;
		       total++;
			}
	} while (T[total-1]!=13);
	system("cls");
	otr=(total-cons-voc-esp-1); 
	cout<<"El texto ingresado tiene: "<<endl;
	cout<<"-"<<cons<<" Consonantes"<<endl;
	cout<<"-"<<voc<<" Vocales"<<endl;
	cout<<"-"<<otr<<" Simbolos"<<endl;
	system("pause");
    return 0;
}
