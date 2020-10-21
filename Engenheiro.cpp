#include <iostream>
#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:

    Engenheiro(std::string nome, double salario, double horas, int projetos) : Empregado(nome, salario, horas), _projetos(projetos) {}

    virtual ~Engenheiro() {}
    
    virtual void imprime() override {
      std::cout << "Nome: " << getNome() << std::endl <<
      "Salario Mes: " << pagamentoMes() << std::endl <<
      "Projetos: " << _projetos << std::endl << std::endl;
    }

    int getProjetos() { return _projetos; }

  private:
	  int _projetos;
};

