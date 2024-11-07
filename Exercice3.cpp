#include <iostream>



int main(){
float a;
float b {0};

for(int c = 0; c < 5; c++){

std::cin >> a;
b = b + a/5;
}
std::cout << "La moyenne est " << b << std::endl;
}