#include<iostream>

int breackOrreturn(){ while (true){ using namespace std; cout<<"ingrese s para salir o r para regresar"; char ch; cin>>ch;

	if(ch=='s'){
		break;
	
	}
	if (ch=='r'){
		return 1;
	}
}
std::cout<<"nos salimos del ciclo\n";
return 0;
} int main(){ int returnvalue{breackOrreturn()}; std::cout<<"funcion regreso "<< returnvalue<<'\n'; return 0; }
