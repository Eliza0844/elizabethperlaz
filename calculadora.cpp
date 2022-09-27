//Programa que presenta las operaciones básicas
//Creado por Stalin Francis
//ELIZABETH  PERLAZA  
//Fecha: 14-09-2022

#include<iostream>
using namespace std;

int main()
{
	float EPMx,EPMm,EPMd,EPMr,EPMs,EPMy;
	//Ingreso de datos
	cout<<"Ingrese en valor de x=:";
	cin>>EPMx;
	cout<<"Ingrese en valor de y=:";
	//Operaciones 
	cin>>EPMy;
	EPMs=EPMx+EPMy;
	EPMm=EPMx*EPMy;
	EPMd=EPMx/EPMy;
	EPMr=EPMx-EPMy;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<EPMx<<" + "<<EPMy<<" = "<<EPMs<<endl;
	cout<<"Las multiplicacion de "<<EPMx<<" * "<<EPMy<<" = "<<EPMm<<endl;
	cout<<"Las division de "<<EPMx<<" / "<<EPMy<<" = "<<EPMd<<endl;
	cout<<"Las resta de "<<EPMx<<" - "<<EPMy<<" = "<<EPMr<<endl;
	return 0 ;

}

