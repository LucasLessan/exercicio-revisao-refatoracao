#include "Engenheiro.cpp"
#include "Vendedor.cpp"

#define TAMANHO_ENG 3 // Numero de engenheiros
#define TAMANHO_VEN 3 // Numero de vendedores

int main() {

  // Criacao do vetor de empregados usando o numero de engenheiros e vendedores definidos acima
  Empregado* emp[TAMANHO_ENG + TAMANHO_VEN];
  
  // Instanciacao dos empregados
  emp[0] = new Engenheiro("Joao Snow", 35, 9.5, 3);
  emp[1] = new Engenheiro("Daniela Targaryen", 30, 8, 1);
  emp[2] = new Engenheiro("Bruno Stark", 30, 8, 2);
  emp[3] = new Vendedor("Tonho Lannister", 20, 6, 5000);
  emp[4] = new Vendedor("Jose Mormont", 25, 8, 3000);
  emp[5] = new Vendedor("Sonia Stark", 30, 8, 4000);

  // Loop de impressao usando o numero total de empregados
  for(Empregado* e: emp)
    e->imprime();

  // Loop de limpeza do heap
  for(Empregado* e: emp)
    delete e;

  return 0;	
}