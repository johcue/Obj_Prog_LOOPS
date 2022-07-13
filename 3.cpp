#include <iostream>
#include <cstdlib> 
/*UN EMPLEADO DE LA TIENDA TIKI TAKA REALIZA N VENTAS DURANTE EL DIA, SE REQUIERE SABER CUANTAS 
DE ELLAS FUERON MAYORES A $100, CUANTAS DE FUERON MAYORES A $500 PERO MENORES A $100, Y CUANTAS 
DE ELLAS FUERON MENORES A $500. ADEMAS, SEREUIERE SABER EL MONTO DE LO VEDIDO EN CADA CATEGORIA 
Y DEFORMA GLOBAL (WHILE).*/
using namespace std;
int main(int argc, char** argv)
{
    int z,n,v,c1,c2,c3;
    int sum,sum1,sum2,sum3;
    char resp;
    do{
	system("cls");
    cout<<"\t \t TIENDA TIKI TAKA CANTIDAD DE VENTAS"<<endl;
    cout<<"Por favor ingrese la cantidad de ventas que hubo en el dia ";
    cin>>z;
    n=1;
    c1=0;
    c2=0;
    c3=0;
    sum=0;
    sum1=0;
    sum2=0;
    sum3=0;
    while (n<=z)
    {
		cout<<endl<<"Por favor Inserte la Venta numero "<<n<<" = $";
    	cin>>v;
    	if (v>1000)
    	{
    		c1=c1+1;
    		sum1=sum1+v;
		}
    	else
    	if (v>500 && v<1000)
    		{
    			c2=c2+1;
    			sum2=sum2+v;
			}
		else
    		if (v<500)
    	    {
    			c3=c3+1;
    			sum3=sum3+v;
		     }
		n++;
	}
	sum=sum1+sum2+sum3;
	cout<<"Ventas por encima de $1000: "<<c1<<" y se recaudaron $"<<sum1<<endl;
	cout<<"Ventas entre $500 y $1000: "<<c2<<" y se recaudaron $"<<sum2<<endl;
	cout<<"Ventas por debajo de $500: "<<c3<<" y se recaudaron $"<<sum3<<endl;
	cout<<"Total Universal de ventas $"<<sum<<endl;
	cout<<endl<<"Desea procesar otras cantidades? s/n ";
	cin>>resp;
 }while(resp=='s');
    system("pause");
    return 0;
}

