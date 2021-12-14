//niveles aninados

#include<iostream>
using namespace std;

int main(){//nivel 1
cout<<"ingresa un entero: ";
int value {};
cin>>value;
if (value>=0){//nivel 2
if((value%2)==0){//nivel 3
		cout<<value<<"es un numero positivo y par";

}
	
else{
	cout<<value<<"es un numero postitivo e impar\n";
}
	
	
	
}
	return 0;
	//bloque final sin punto y coma
}
