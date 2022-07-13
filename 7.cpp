#include<iostream>
#include<cstdlib>
#include<math.h>
/*7. ESCRIBA UN PROGRAMA QUE LEA UN NUMERO ENTERO Y QUE DETERMINE SI DICHO NUMERO ES NUMERO DE ARMSTRNG (WHILE).*/
using namespace std;
int main(int argc, char** argv) 
{
	int n,i,j,x;
	char resp;
    do{
    system("cls");
	cout<<"\t \t VERIFIQUE SI EL NUMERO INGRESADO ES UN NUMERO DE ARMSTRONG"<<endl;
	cout<<"Por favor, ingrese un numero ";
	cin>>n;
	i=0;
	j=n;
	while(j>0)
	{
		x=j%10;
		i=i+(x*x*x);
		j=j/10;
	}
	if(i==n)
	{
	   cout<<"El numero "<<n<<" es numero de Armstrong"<<endl;
	}
	else
	{
		cout<<"El numero "<<n<<" NO es numero de Armstrong"<<endl;
	}
	cout<<endl<<"Desea procesar otro numero? s/n ";
	cin>>resp;
 }while(resp=='s');
	system("pause");
	return 0;
}
