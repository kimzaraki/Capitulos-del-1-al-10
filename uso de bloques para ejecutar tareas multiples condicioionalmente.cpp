

//uso de bloques para ejecutar tareas multiples condicioionalmente

#include<iostream>
using namespace std;

int main(){
cout<<"ingresa un entero: ";
int value {};
cin>>value;
if (value>=0){
	cout<<value<<"es un numero psoitivo o cero \n";
	cout<<"el doble de este numero es "<<value*2<<'\n';
	
}else{
	cout<<value<<"es un numero negativo\n";
		cout<<"el numero posituvo de este numero es "<< -value<<'\n';
}
	
	
	return 0;
	
}	//bloque final sin punto y coma
	
	
