#include<iostream>
using namespace std;

int main()
{
	int EPMi=0,EPMl;
	float EPMx,EPMs=0;
	cout<<"ingrese el limite l="; cin>>EPMl;
	do{
		
	cout<<"ingrese el numero x="; cin>>EPMx;
	EPMi=EPMi+1;
	EPMs=EPMs+EPMx;



	}while(EPMi<EPMl);
	cout<<"Se ingresaron "<<EPMl<<" numeros "<< "que sumaron "<<EPMs<<endl;
	return 0;



}
