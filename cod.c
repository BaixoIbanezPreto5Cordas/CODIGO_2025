//códigos dia 23/05/2025 - Biblioteca

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

//códigos dia 28/05/2025 - Par ou Ímpar; Ano Bissexto; Número maior entre três
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

/*
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
*/
/*
    #include <stdio.h>
int main () {
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  printf("Digite o primeiro número de sua escolha\n");
  scanf("%d", &num1);
   printf("Digite o segundo número de sua escolha\n");
  scanf("%d", &num2);
   printf("Digite o terceiro número de sua escolha\n");
  scanf("%d", &num3);
    if ((num1 >= num2) && (num2 >= num3)) {
        printf("O maior é %d", num1);
    } else if ((num3 >= num2) && (num2 >= num1)) {
        printf("O maior é %d", num3);
    } else if ((num2 >= num3) && (num3 >= num1)) {
        printf("O maior é %d", num2);
    }
  return 0;  
} 

*/



