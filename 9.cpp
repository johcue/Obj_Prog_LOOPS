#include <iostream>
#include <cstdlib>
/*9. DISEE UN PROGRAMA QUE CALCULE EL MINIMO COMUN MULTIPLO ENTRE DOS NUMEROS QUE SE LEEN POR TECLADO (FOR).*/
using namespace std; 
int main(int argc, char *argv[])
{
    int n, i, m,k, mcm;
    cout<<"\t \t MINIMO COMUN MULTIPLO"<<endl;
    cout<<"Por favor ingrese el primer numero a procesar ";
    cin>>n;
    cout<<"Por favor ingrese el segundo numero a procesar ";
    cin>>k;
	if(n<k)
	{
	    mcm=k;
     }
    else
    {
        mcm=n;
    }
   while ((mcm%k!=0) || (mcm%n!=0))
   {
        mcm++;
   }
    cout<<endl;
    cout<<"-----------------------------"<<endl;
	cout<<" Minimo comun multiplo de "<<n<<endl;
	cout<<"-----------------------------"<<endl;
	for(i=2;i<=n;i++)
	 {
        if(n%i==0)
         {
           m=n/i;
           cout<<"\t "<<m<<"  |  "<<i<<endl;
           n=m;
           i=i-1;
         }
     }
    cout<<endl; 
	cout<<"-----------------------------"<<endl;
    cout<<" Minimo comun multiplo de "<<k<<endl;
    cout<<"-----------------------------"<<endl;
	for(i=2;i<=k;i++)
	 {
        if(k%i==0)
         {
		   m=k/i;
		   cout<<"\t "<<m<<"  |  "<<i<<endl;
		   k=m;
		   i=i-1;                        
         }
     }
   cout<<endl<<"-El minimo comun multiplo es " <<mcm<<endl;
   system("pause");
   return 0;
   }


