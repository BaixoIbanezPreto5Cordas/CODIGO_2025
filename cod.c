//códigos dia 23/05/2025 - Biblioteca, Soma de dois números, Média de 6 números (notas), 

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

#include <stdio.h>

int main() {
    float num1, num2;
    printf ("Escolha dois números para realizar a soma e digite-os abaixo \n");
    scanf ("%f\n", &num1);
    scanf ("%f" ,&num2);
    float soma = num1 + num2;
    printf ("A soma dos números é de %3.2f \n:", soma);
    return 0;
}

#include <stdio.h>

int main() {
    float nota1 = 0.0;
    float nota2 = 0.0;
    float nota3 = 0.0;
    float nota4 = 0.0;
    float nota5 = 0.0;
    float nota6 = 0.0;
    printf ("Digite as 6 notas de desenvolvimento de sistemas: \n");
    scanf ("%f\n", &nota1);
    scanf ("%f\n", &nota2);
    scanf ("%f\n", &nota3);
    scanf ("%f\n", &nota4);
    scanf ("%f\n", &nota5);
    scanf ("%f", &nota6);
    float notafinal = ((nota1 + nota2 + nota3 + nota4 + nota5 + nota6) / 6);
    printf ("A sua média final é de %.2f\n:", notafinal);
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

//códigos dia 29/05/2025: Converter ºF para ºC, Inflação, 
/*
include <stdio.h>

int main() {
    float tf, tc;
    printf ("Digite uma temperatura em Fahrenheit para a conversão: \n");
    scanf ("%f", &tf);

    tc = (tf - 32) * 5 / 9;

    printf ("A temperatura em Celcius seria de %.2f", tc);
} 

*/

#include <stdio.h>

int main() {
    float preco;
    printf ("Coloque o preço do produto abaixo \n");
    scanf ("%f", &preco);
    if (preco >= 100.00) {
        preco = (preco * 1.20);
        printf ("O preço total será de R$%1.2f", preco);
    } else if (preco < 100.00) {
        preco = (preco * 1.10);
        printf ("O preço total será de R$%1.2f", preco);
    }
    return 0;
}
