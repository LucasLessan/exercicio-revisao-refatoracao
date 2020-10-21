#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:

    Engenheiro(std::string nome, double salario, double horas, int projetos) : Empregado(nome, salario, horas), _projetos(projetos) {}

    virtual ~Engenheiro() {}

    virtual void imprime() override;

    int getProjetos() { return _projetos; }

  private:
	  int _projetos;
};

#endif
