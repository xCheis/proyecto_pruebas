#include<iostream>
#include<math.h>
using namespace std;

main()
{
	
	
int a=1,c=3; //definimos variables enteras de la ecuacion
float b=3000.001,ra,rb,raiz,r3,r4;   //definimos variables NO enteras de la ecuacion en float y en double
double b2=3000.001,r1,r2,raiz2;

raiz=sqrt(b*b-(4*a*c));   //calculamos raiz con datos float e int
raiz2=sqrt(b2*b2-4*a*c);   //calculamos raiz con datos double e int

ra=(-b+raiz)/2;  //suma y resta de la chicharronera para datos float
rb=(-b-raiz)/2;

r1=(-b2+raiz2)/2; //suma y resta de la chicharronera para datos double
r2=(-b2-raiz2)/2;

r3=(-2*c)/(b+raiz);




cout<<"para datos float"<<endl<<"r1= "<<ra<<"  r2= "<<rb<<endl;  //imprimiendo raices float

cout<<"para datos double"<<endl<<"r1= "<<r1<<"  r2= "<<r2<<endl;  //imprimiendo raices double

cout<<"para datos con la chicharronera 2.0"<<endl<<"r1= "<<r3<<endl;  //imprimiendo raices con nueva chicharronera	
}
