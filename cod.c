//códigos dia 23/05/22025

/* #include <stdio.h>

int main() {
  int livro1 = 0, livro2 = 0; 
  float IDdaCompra = 0.0;
  float medialivros = 0.0;
    printf("Digite o número do primeiro livro abaixo \n");
    scanf("%d", &livro1);
    printf("Digite o número do segundo livro abaixo \n");
    scanf("%d", &livro2);
    medialivros = (livro1 + livro2)/2;
    printf("A média dos livros é: %f \n", medialivros);
    IDdaCompra = (livro1 + livro2);
    printf("O ID de sua compra é: %f", IDdaCompra);
    return 0;
}
*/

//códigos dia 28/05/2025
/*
  #include <stdio.h>
int main () {
  int num = 0;
  printf("Digite um número de sua escolha\n");
  scanf("%d", &num);
  if (num % 2 == 0) {
      printf("O número que você digitou é par\n");
  } else {
      printf("O número é ímpar\n");
  }
  return 0;
}
*/

  #include <stdio.h>
int main () {
  int ano = 0;
  printf("Digite um ano de sua escolha\n");
  scanf("%d", &ano);
  if ((ano % 4 == 0) && (ano %100 != 0) || (ano % 400 == 0)){
      printf("O ano que você digitou é bissexto");
  } else {
      printf("O ano não é bissexto");
  }
  return 0;
}


