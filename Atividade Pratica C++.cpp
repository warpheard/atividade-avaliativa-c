#include<stdio.h> 
int main(){
    int senha_cadastrada = 1234;
    int senha_tentativa;
    int opcao;

    double saldo = 500.00; 
    double valor_operacao;
    double maior_deposito = 0.0;

    printf("Caixa Eletronica\n");
    printf("digite o a senha da conta: ");
    scanf("%d", &senha_tentativa);
    if(senha_tentativa == 1234){
        printf("Senha Correta\n");
    } else {
        printf("Senha Incorreta! Operação cancelada.\n");
        return 0;
    }
    do{
        printf("Escolha o seu serviço: \n");
        printf("1 - Depositar\n");
        printf("2 - Saque\n");
        printf("3 - Consultar Saldo e Estatísticas\n");
        printf("4 - Sair\n");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite o valor do deposito: ");
                scanf("%lf", &valor_operacao);
                saldo += valor_operacao;
                if(valor_operacao > maior_deposito) {
                    maior_deposito = valor_operacao;
                }
                printf("Deposito realizado com sucesso!\n");
                break;
            case 2:
                printf("Digite o valor do saque: ");
                scanf("%lf", &valor_operacao);
                if(valor_operacao <= saldo) {
                    saldo -= valor_operacao;
                    printf("Saque realizado com sucesso!\n");
                } else {
                    printf("Saldo insuficiente para saque.\n");
                }
                break;
            case 3:
                printf("Saldo atual: %.2lf\n", saldo);
                printf("Maior deposito realizado: %.2lf\n", maior_deposito);
                break;
            case 4:
                printf("Obrigado por usar nosso banco!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while(opcao != 4);
     
    return 0;
    





}

