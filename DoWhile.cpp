#include<iostream>
int main(){

int seleccion;
do{
	using namespace std;
	cout<<"seleccona una oopcie";
	cout<<"1. suma";
	cout<<"2.resta";
	cout<<"3.Multi";
	cout<<"4.divi";
	cin>>seleccion;
}
while(seleccion !=1 && seleccion !=2 && seleccion !=3 && seleccion !=4);

std::cout<<"seleccionaste la opcion #"<<seleccion<<'\n';
return 0;
}
