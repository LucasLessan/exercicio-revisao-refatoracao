#include <iostream>
#include "Engenheiro.hpp"

void Engenheiro::imprime() {
  std::cout << "Nome: " << getNome() << std::endl <<
  "Salario Mes: " << pagamentoMes() << std::endl <<
  "Projetos: " << _projetos << std::endl << std::endl;
}