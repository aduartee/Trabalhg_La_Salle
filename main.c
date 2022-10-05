int main() {
  printf("------------- Codigo feito por: Arthur Duarte Alves Cruz "
         "------------- \n \n ");
  printf("------------- Curso: Analise e Desenvolvimento de Sistemas "
         "------------- \n \n ");
  printf("----------------------- Matricula: 202213336 ---------------------- "
         "\n \n ");

  int choice = 0; // Declarando as variaveis e igualando as a 0
  int numero1, numero2, soma, subtrai, mult; /// Declarando as variaveis inteiro
  float nraiz, total, divi;                              /// Declarando as variaveis float
  printf("Qual operação deseja executar?\n");
  printf("1: Digite 1 para efetuar a raiz\n");
  printf("2: Digite 2 para somar\n");
  printf("3: Digite 3 para subtrair\n");
  printf("\nVocê deseja efetuar a raiz(1), somar(2), subtrair(3), "
         "multiplicar(4), dividir(5): ");
  scanf("%d", &choice); /// Lendo a entrada que o usuário vai realizar

  if (choice == 1) { /// Se o valor de escolha for igual a 1, executa o codigo abaixo
    printf("Digite o numero: ");
    scanf("%f", &nraiz); /// Lê o primeiro numero digitado
    total = sqrt(nraiz); /// O metodo sqrt realiza a raiz quadrada de qualquer valor que estiver dentro do parenteses
    printf("O resultado foi: %f",total); /// Printa o resultado, referenciando a variavel que está
                   /// armazenando a resposta
  }
  if (choice == 2) { // Se o valor de escolha for igual a 2, executa o codigo abaixo
    printf("\nDigite o primeiro valor: ");
    scanf("%d", &numero1); /// Lê o primeiro numero digitado
    printf("Digite o segundo valor:");
    scanf("%d", &numero2);    /// Lê o segundo numero digitado
    soma = numero1 + numero2; /// Realiza a soma dos dois numeros digitados
    printf("O resultado foi: %d", soma); /// Printa na tela o resultado
  }

  if (choice == 3) { // Se o valor de escolha for igual a 3, executa o codigo abaixo
    printf("\nDigite o primeiro valor: ");
    scanf("%d", &numero1); /// Lê o primeiro numero digitado
    printf("Digite o segundo valor:");
    scanf("%d", &numero2); /// Lê o segundo numero digitado

    if (numero1 > numero2) { /// Se o primeiro numero for menor que o segundo
                             /// realiza a subtração
      subtrai = numero1 - numero2; /// Guardando o resultado em uma variavel
      printf("O resultado foi: %d", subtrai); /// Exibindo na tela o resultado
    } 
    else { /// Caso o primeiro numero for maior que o segundo mostra mensagem
             /// a abaixo
      printf("O primeiro numero não pode ser menor que o segundo !");
    }
  }

  if (choice == 4) { // Se o valor de escolha for igual a 4, executa o codigo abaixo
    printf("\nDigite o primeiro valor: ");
    scanf("%d", &numero1); /// Lê o primeiro numero digitado
    printf("Digite o segundo valor:");
    scanf("%d", &numero2); /// Lê o segundo numero digitado
    mult = numero1 * numero2; /// Realiza a multiplicação dos dois numeros digitados
    printf("O resultado foi: %d", mult); /// Printa na tela o resultado
  }

  if (choice == 5) { // Se o valor de escolha for igual a 5, executa o codigo abaixo
    printf("\nDigite o primeiro valor: ");
    scanf("%d", &numero1); /// Lê o primeiro numero digitado
    printf("Digite o segundo valor:");
    scanf("%d", &numero2);    /// Lê o segundo numero digitado
     if (numero1 == 0) { /// Se o primeiro numero for igual a zero
      printf("Não é possivel realizar divisão por zero");
  }
     else { /// Caso o primeiro numero for maior que o segundo mostra mensagem
      divi = numero1 / numero2; /// Realiza a divisão dos dois numeros digitados
    printf("O resultado foi: %f", divi); /// Printa na tela o resultado
    }
}
}