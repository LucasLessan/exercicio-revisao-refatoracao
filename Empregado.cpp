#include "Empregado.hpp"

double Empregado::pagamentoMes () {

    // Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (_horasTrabalhadas > 8) {

        // As horas trabalhadas alem de 8 rendem 1.5 vezes o salario/hora, mais as 8 trabalhadas
        // multiplicadas pelo valor da hora
        return ((_horasTrabalhadas - 8) * 1.5 * _salarioHora) + (8 * _salarioHora); 
    }

    return _horasTrabalhadas * _salarioHora;
}