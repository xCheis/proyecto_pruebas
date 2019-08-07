#include<iostream>
#include<math.h>
using namespace std;

double factorial(double x)          // funcion recurisva para sacar un factorial 
{
    if(x<2)
        return 1;
    else
        return x * factorial(x-1);
}

main()
{
int n=1;                                   // declarando contador para  transiciones 
double a,x,h,r,r1,v;	               // declarando variables para calcular datos (tipo double para mas exactitud) 

a=M_PI/4;												
x=M_PI/3;
v=sqrt(2)/2;                              // sacando el valor exacto conocido (cos(pi/4))
h=x-a;


do												//iniciando ciclo para realizar las iteraciones 
{
	if(n=1);
	{
	r=v;
	r1=pow(h,n);									// calculamos la h^(n+1)
	
	r1=(v*r1)/factorial(n);                       //calculamos la siguiente parte de la serie de taylor
	
	cout<<"resultado en n0= "<<r<<endl;	
	}	

	if(n=2);
	{
	r=r-r1;
	r1=pow(h,n);									// calculamos la h^(n+1)
	
	r1=(v*r1)/factorial(n);                       //calculamos la siguiente parte de la serie de taylor
	cout<<"resultado en n1= "<<r<<endl;		
		
	}	

	if(n=3);
	{
	r=r-r1;
		r1=pow(h,n);									// calculamos la h^(n+1)
	
	r1=(v*r1)/factorial(n);                       //calculamos la siguiente parte de la serie de taylor
	cout<<"resultado en n2= "<<r<<endl;		
		
	}	

	if(n=4);
	{
	r=r+r1;
	
	r1=pow(h,n);									// calculamos la h^(n+1)
	
	r1=(v*r1)/factorial(n);                       //calculamos la siguiente parte de la serie de taylor
	
	cout<<"resultado en n3= "<<r<<endl;	
	}	

	if(n=5);
	{
	r=r+r1;
	
	r1=pow(h,n);									// calculamos la h^(n+1)
	
	r1=(v*r1)/factorial(n);                       //calculamos la siguiente parte de la serie de taylor
	
	cout<<"resultado en n4= "<<r<<endl;	
	}	

	if(n=6);
	{
	r=r-r1;
	
	r1=pow(h,n);									// calculamos la h^(n+1)
	
	r1=(v*r1)/factorial(n);                       //calculamos la siguiente parte de la serie de taylor
	
	cout<<"resultado en n5= "<<r<<endl;		
	}	
	
	n++;                                 //incrementando contador 
	
}while(n!=7&&n<7);          //limite de iteracion
	
}
