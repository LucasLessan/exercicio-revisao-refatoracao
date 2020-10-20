#include <iostream>
#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:

    Engenheiro(double salario, std::string nome, int proj, double horas), : Empregado(salario, nome, horas), projetos(proj) {}

    void imprime() override {
      std::cout << "Nome: " << getNome() << std::endl <<
      "Salario Mes: " << pagamentoMes() << std::endl <<
      "Projetos: " << projetos << std::endl << std::endl;
    }

    int getProjetos() { return projetos; }

  private:
	  int projetos;	
};

