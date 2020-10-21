#include <iostream>
#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:

    Vendedor(std::string nome, double salario, double horas, double quota) : Empregado(nome, salario, horas),
      _quotaMensalVendas(quota) {}

    virtual ~Vendedor() {}

    virtual void imprime() override {
      std::cout << "Nome: " << getNome() << std::endl <<
      "Salario Mes: " << pagamentoMes() << std::endl <<
      "Quota Vendas: " << quotaTotalAnual() << std::endl << std::endl;
    }

	  double quotaTotalAnual() { return _quotaMensalVendas * 12; }

    double getQuota() { return _quotaMensalVendas; }

  private:
	  double _quotaMensalVendas;
};
