#include <iostream>
#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:

    Vendedor(double salario, std::string nome, double quota, double horas) : Empregado(salario, nome, horas), 
      quotaMensalVendas(quota) {}

    void imprime() override {
      std::cout << "Nome: " << getNome() << std::endl <<
      "Salario Mes: " << pagamentoMes() << std::endl <<
      "Quota Vendas: " << quotaTotalAnual() << std::endl << std::endl;
    }

	  double quotaTotalAnual() { return quotaMensalVendas * 12; }

    double getQuota() { return quotaMensalVendas; }

  private:
	  double quotaMensalVendas;  
};