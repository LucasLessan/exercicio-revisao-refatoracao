#include <iostream>
#include "Vendedor.hpp"

void Vendedor::imprime() {
  std::cout << "Nome: " << getNome() << std::endl <<
  "Salario Mes: " << pagamentoMes() << std::endl <<
  "Quota Vendas: " << quotaTotalAnual() << std::endl << std::endl;
}

double Vendedor::quotaTotalAnual() { return _quotaMensalVendas * 12; }