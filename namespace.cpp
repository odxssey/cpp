#include <iostream>

namespace primeiro{
int x = 1;
}

namespace segundo{
    int x = 2;
}

int main(){
    // using namespace segundo; para ter um valor autodeclarado sem precisar declarar seu
    // namespace


/*
namespace soluciona problemas com declarações em projetos de larga escala, como cada
entidade precisa de um nome único, o namespace pode organizá-los  e indentificar semelhantes
desde que tenham diferentes namespaces.

namespace sempre acima do int main(){

}

*/ 


//std::cout << x;


    return 0;
}