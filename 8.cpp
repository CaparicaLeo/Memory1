#include <iostream>

void incrementarEImprimir() {
    // Variável estática preserva seu valor entre chamadas
    register int variavelDeRegistro = 1;

    // Incrementa a variável
    variavelDeRegistro++;

    // Imprime o valor atual
    std::cout << "Valor da variável de registro: " << variavelDeRegistro << std::endl;
}

int main() {
    // Chama a função várias vezes
    incrementarEImprimir();
    incrementarEImprimir();
    incrementarEImprimir();

    return 0;
}
