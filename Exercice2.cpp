#include <iostream>



int main(){
float longueur;
float largeur;

std::cout << "Saisir longueur ";
std::cin >> longueur;
std::cout << "Saisir largeur ";
std::cin >> largeur;
std::cout << "L'aire est de " << largeur*longueur << std::endl;

return 0;
}