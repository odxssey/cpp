#include <iostream>
int main (){
    // int apenas conta números inteiros, então numeros quebrados são substituidos por inteiros
    /*
    [Running] cd "c:\Users\victo\OneDrive\Área de Trabalho\c++\" && g++ variables2.cpp -o variables2 && "c:\Users\victo\OneDrive\Área de Trabalho\c++\"variables2

     int days = 14.3;
     
      14
     
     
     [Done] exited with code=0 in 0.683 seconds

    
    */

   // para isto é usado o double (incluem números decimais)

    int age = 25;
    int year = 2000;
    int days = 14.3;

    double price = 6.75;
    double temperature = 37.3;

   // char (um caractere apenas)

   char nota = 'A';
   char vogais = 'U';

   // std::cout << vogais;

   // boolean (true or false)

   bool estudante = true;
   bool energia = false;
   bool avenda = true;

   // strings (representa uma sequência de texto), basicamente um char que pode armazenar mais palavras.

   std::string nome = "Victor,";
   std::string diasemana = "Segunda-feira";

   // std::cout << "Olá " << nome;
   // std::cout << " Você tem " << age << " anos? ";
   // std::cout << diasemana;
   // std::cout << nome;

    return 0;


}