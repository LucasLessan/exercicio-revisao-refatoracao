#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>

class Empregado {
	
  public:

    Empregado(std::string nome, double salario, double horas) : _nome(nome), _salarioHora(salario), _horasTrabalhadas(horas) {}

    virtual ~Empregado() {}
    
    double pagamentoMes() {

	    // Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (_horasTrabalhadas > 8) {
        // As horas trabalhadas alem de 8 rendem 1.5 vezes o salario/hora, mais as 8 trabalhadas
        // multiplicadas pelo valor da hora
        return ((_horasTrabalhadas - 8) * 1.5 * _salarioHora) + (8 * _salarioHora); 
      }
	    
      return _horasTrabalhadas * _salarioHora;
    }

    double getHorasTrabalhadas() { return _horasTrabalhadas; }

    double getSalarioHora() { return _salarioHora; }

    std::string getNome() { return _nome; }

    virtual void imprime() = 0;

  private:
    std::string _nome;
    double _salarioHora;
    double _horasTrabalhadas;
};

#endif