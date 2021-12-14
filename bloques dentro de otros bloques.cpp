

//bloques dentro de otros bloques

#include<iostream>
using namespace std;
int add(int x, int y)
//bloque inico
{
return x+y;	
}//bloque final sin punto y coma

int main(){//bloque inico

	
	int valor{};//se inicializa
	sumar (3,4);
	{
		sumar (3,4);
		
	}//bloque final interno/aninado
	
	return 0;
	
}	//bloque final sin punto y coma
	
	
	

