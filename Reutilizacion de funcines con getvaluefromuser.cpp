#include<iostream>

int getValueFromUser(){ int input{}; std::cin>>input;

return input;
} int main(){ int x{getValueFromUser()};

int y{getValueFromUser()};

std::cout<<x<<"+"<<y<<"="<<x+y<<'\n'; return 0; }
