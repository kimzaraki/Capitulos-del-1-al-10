#include <iostream>
enum class Color{ black, white, pink };

void printColor(Color color){ switch(color){ case Color::black: std::cout<<"black"; break;

	case Color::whit:
	std::cout<<"white";
	break;
	
	case Color::pink:
	std::cout<<"pink";
	break;
}

} int main(){

printColor(Color::pink);
return 0;
}
