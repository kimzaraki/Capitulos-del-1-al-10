#include<charconv>
 #include<iostream>
 #include <optional>
 #include <string>
 #include<string_view>

bool isValidName(std::string_view name){ return std::ranges::all_of(name,[](char ch)){ return (std::isalpha(ch)||std::isspace(ch));

}};
} int main(){ std::string name{}; do{ std::cout<<"ingrese su nombre"; std::getLine(Std::cin,name);

}while(!isValidName(name));

std::cout<<"hola"<<name<<'\n';
}
