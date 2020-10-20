#include "Engenheiro.cpp"
#include "Vendedor.cpp"

#define TAMANHO_ENG 3 // Numero de engenheiros
#define TAMANHO_VEN 3 // Numero de vendedores

int main() {

  // Criacao do vetor de empregados usando o numero de engenheiros e vendedores definidos acima
  Empregado emp[TAMANHO_ENG + TAMANHO_VEN];
  
  // Instanciacao dos empregados
  emp[0] = new Engenheiro(35, "Joao Snow", 3, 9.5);
  emp[1] = new Engenheiro(30, "Daniela Targaryen", 1, 8);
  emp[2] = new Engenheiro(30, "Bruno Stark", 2, 8);
  emp[3] = new Vendedor(20, "Tonho Lannister", 5000, 6);
  emp[4] = new Vendedor(25, "Jose Mormont", 3000, 8);
  emp[5] = new Vendedor(30, "Sonia Stark", 4000, 8);

  // Loop de impressao usando o numero total de empregados
  for(int i = 0; i < TAMANHO_ENG + TAMANHO_VEN; i++)
    emp[i].imprime();

  // Loop de limpeza do heap
  for(int i = 0; i < TAMANHO_ENG + TAMANHO_VEN; i++)
    delete emp[i];

  return 0;	
}