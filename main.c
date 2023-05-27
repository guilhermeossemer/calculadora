#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float numero_1, numero_2, percentual, total;
    char resposta = ' ';
    int opcao, potencia, valor;

    do{
        printf("Informe um numero: ");
        scanf("%f",&numero_1);
        do{
            printf("\n1 - Soma\n");
            printf("2 - Subtra��o\n");
            printf("3 - Multiplica��o\n");
            printf("4 - Divis�o\n");
            printf("5 - Porcentagem\n");
            printf("6 - Potencia��o\n");
            printf("7 - Encerrar\n");
            scanf("%i",&opcao);
            system("cls");
            if(opcao<1 || opcao>7){
                printf("Op��o invalida!\nTente novamente!\n");
            }
        }
        while(opcao<1 || opcao>7);
        switch(opcao){
            case 1:
                printf("Informe o segundo numero: ");
                scanf("%f",&numero_2);
                printf("\nSoma de %.2f + %.2f = %.2f\n",numero_1,numero_2,numero_1+numero_2);
                break;
            case 2:
                printf("Informe o segundo numero: ");
                scanf("%f",&numero_2);
                printf("\nSubtra��o de %.2f - %.2f = %.2f\n",numero_1,numero_2,numero_1-numero_2);
                break;
            case 3:
                printf("Informe o segundo numero: ");
                scanf("%f",&numero_2);
                printf("\nMultiplica��o de %.2f * %.2f = %.2f\n",numero_1,numero_2,numero_1*numero_2);
                break;
            case 4:
                printf("Informe o segundo numero: ");
                scanf("%f",&numero_2);
                if(numero_2 <= 0){
                    printf("Divis�o invalida!");
                }
                else{
                    printf("\nDivis�o de %.2f / %.2f = %.2f\n",numero_1,numero_2,numero_1/numero_2);
                }
                break;
            case 5:
                do{
                    printf("1 - Acrescentar\n2 - Diminuir\n");
                    scanf("%i",&valor);
                    system("cls");
                    if(valor<1 || valor>2){
                        printf("Op��o invalida!\nTente novamente!\n");
                    }
                }
                while(valor<1 || valor>2);
                    if(valor==1){
                        printf("Informe o %% do acr�scimo:");
                        scanf("%f",&percentual);
                        total= numero_1+(numero_1*(percentual/100));
                        printf("%.2f com %.2f%% de acr�scimo:%.2f\n ", numero_1,percentual, total);
                    }
                    if(valor==2){
                        printf("Informe o %% a diminuir: ");
                        scanf("%f",&percentual);
                        total= numero_1-(numero_1*(percentual/100));
                        printf("%.2f com %.2f%% de desconto:%.2f\n ", numero_1, percentual, total);
                    }
                break;
            case 6:
                printf("Deseja elevar em qual pot�ncia?:");
                scanf("%i",&potencia);
                printf("\nResultado da potencia��o:%.2f\n",pow(numero_1,potencia));
                break;
            case 7:
                printf("\nEncerrado pelo usuario!!\n");
                break;
        }
        fflush(stdin);
        if(opcao>=1 && opcao<7){
            do{
                printf("\nDeseja voltar ao menu pricipal?\n(n)n�o\n(s)sim\n");
                scanf("%c",&resposta);
                system("cls");
                fflush(stdin);
                if(resposta!='s' && resposta!='n'){
                    printf("\nResposta invalida!\nTente novamente!!\n");
                }
            }
            while(resposta!='s' && resposta!='n');
        }
    }
    while(resposta=='s'&& opcao!=7);
    if(resposta=='n'){
        printf("Programa finalizado pelo usu�rio!!!\n");
    }
    return 0;
}
