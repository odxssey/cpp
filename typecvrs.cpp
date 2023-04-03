#include<iostream>

int main(){

// type conversion = conversão de valor de algum tipo de data para outro
// Implicit = automático
// Explicit = Alteração manual do valor


// double x = (int)3.14;
// exemplo de como pode ser usado:

int correct = 8;
int questions = 10;
double score = correct/(double)questions * 100;

std::cout << score << "%";



    return 0;
}