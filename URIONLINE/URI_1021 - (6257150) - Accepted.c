#include <stdio.h>


int main() {
  double value;
  scanf("%lf", &value);

  int notas_100 = 0,  notas_50 = 0,  notas_20 = 0,  notas_10 = 0,  notas_5 = 0,  notas_2 = 0;
  int moedas_100 = 0, moedas_50 = 0, moedas_25 = 0, moedas_10 = 0, moedas_5 = 0, moedas_1 = 0;

  notas_100 = value / 100;
  value -= notas_100 * 100;

  notas_50 = value / 50;
  value -= notas_50 * 50;

  notas_20 = value / 20;
  value -= notas_20 * 20;

  notas_10 = value / 10;
  value -= notas_10 * 10;

  notas_5 = value / 5;
  value -= notas_5 * 5;

  notas_2 = value / 2;
  value -= notas_2 * 2;

  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", notas_100);
  printf("%d nota(s) de R$ 50.00\n", notas_50);
  printf("%d nota(s) de R$ 20.00\n", notas_20);
  printf("%d nota(s) de R$ 10.00\n", notas_10);
  printf("%d nota(s) de R$ 5.00\n", notas_5);
  printf("%d nota(s) de R$ 2.00\n", notas_2);

  // o máximo que pode sobrar até aqui é 1.99, então convertemos em centenas pra facilitar os cálculos das moedas
  //
  value *= 100;

  moedas_100 = value / 100;
  value -= moedas_100 * 100;

  moedas_50 = value / 50;
  value -= moedas_50 * 50;

  moedas_25 = value / 25;
  value -= moedas_25 * 25;

  moedas_10 = value / 10;
  value -= moedas_10 * 10;

  moedas_5 = value / 5;
  value -= moedas_5 * 5;

  moedas_1 = value / 1;
  value -= moedas_1 * 1;

  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", moedas_100);
  printf("%d moeda(s) de R$ 0.50\n", moedas_50);
  printf("%d moeda(s) de R$ 0.25\n", moedas_25);
  printf("%d moeda(s) de R$ 0.10\n", moedas_10);
  printf("%d moeda(s) de R$ 0.05\n", moedas_5);
  printf("%d moeda(s) de R$ 0.01\n", moedas_1);

  return 0;
}