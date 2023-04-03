#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

//typedef std::string text_t;
//typedef int number_t;

// using text_t = std::string; << using substitui typedef também.
// using number_t = int;

int main(){

// typedef é quase que um nickname que pode ser dado para diferenciar outro tipo de data
// um novo indentificador.


text_t firstname = "Victor ";
number_t age =  25;

std::cout << firstname << '\n';
std::cout << age << '\n';

    return 0;
}