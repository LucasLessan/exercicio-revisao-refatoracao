#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>

class Empregado {
	
  public:

    Empregado(double salario, std::string n, double horas) : salarioHora(salario), nome(n), horasTrabalhadas(horas) {}

    double pagamentoMes() {

	    // Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        // As horas trabalhadas alem de 8 rendem 1.5 vezes o salario/hora, mais as 8 trabalhadas
        // multiplicadas pelo valor da hora
        return ((horasTrabalhadas - 8) * 1.5 * salarioHora) + (8 * salarioHora); 
      }
	    
      return horasTrabalhadas * salarioHora;
    }

    double getHorasTrabalhadas() { return horasTrabalhadas; }

    double getSalarioHora() { return salarioHora; }

    std::string getNome() { return nome; }

    virtual void imprime() = 0;

  private:
    double salarioHora;
    double horasTrabalhadas;
    std::string nome;
};

#endif