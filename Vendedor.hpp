#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:

    Vendedor(std::string nome, double salario, double horas, double quota) : Empregado(nome, salario, horas),
      _quotaMensalVendas(quota) {}

    virtual ~Vendedor() {}

    virtual void imprime() override;

	double quotaTotalAnual();

    double getQuota() { return _quotaMensalVendas; }

  private:
	  double _quotaMensalVendas;
};

#endif
