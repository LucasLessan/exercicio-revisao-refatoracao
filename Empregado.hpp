#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>

class Empregado {

  public:

    Empregado(std::string nome, double salario, double horas) : _nome(nome), _salarioHora(salario), _horasTrabalhadas(horas) {}

    virtual ~Empregado() {}

    double pagamentoMes();

    std::string getNome() { return _nome; }

    double getSalarioHora() { return _salarioHora; }

    double getHorasTrabalhadas() { return _horasTrabalhadas; }

    virtual void imprime() = 0;

  private:
    std::string _nome;
    double _salarioHora;
    double _horasTrabalhadas;
};

#endif
