#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

      setlocale(LC_ALL, "Portuguese");
    printf("Testar Git");
    printf("Testar Git22");


float PF = 7.50, PC = 8.69, BM = 5, SO = 4.50, TU = 3.25,TT,QT,P,FP,VD,VF,TR,DI;

    printf("<><><> Lista de produtos <><><>\n\n");
    printf("Código |    Produto     | VALOR\n");
    printf("-------|----------------|-------\n");
    printf("   1   | Pão de Forma   | 7,50R$\n");
    printf("   2   | Pão de Centeio | 8,69R$\n");
    printf("   3   | Broa de Milho  | 5,00R$\n");
    printf("   4   | Sonho          | 4,50R$\n");
    printf("   5   | Tubaína        | 3,25R$\n\n");

    printf("Digite o código do produto: ");
    scanf("%f",&P);
    printf("\nDigite a quantidade: ");
    scanf("%f",&QT);

        if(P==1)
        {
            TT=QT*PF;
            printf("\n\n-----Nota-----\n\n");
            printf("%.0fx---Pão de Forma\n\n",QT);
            printf("Total: %.2fR$\n",TT);
            printf("\n--------------\n\n");
        }

        if(P==2)
        {
            TT=QT*PC;
            printf("\n-----Nota-----\n\n");
            printf("%.0fx---Pão de Centeio\n\n",QT);
            printf("Total: %.2fR$\n",TT);
            printf("\n--------------\n\n");
        }

        if(P==3)
        {
            TT=QT*BM;
            printf("\n-----Nota-----\n\n");
            printf("%.0fx---Broa de Milho\n\n",QT);
            printf("Total: %.2fR$\n",TT);
            printf("\n--------------\n\n");
        }

        if(P==4)
        {
            TT=QT*SO;
            printf("\n-----Nota-----\n\n");
            printf("%.0fx---Sonho\n\n",QT);
            printf("Total: %.2fR$\n",TT);
            printf("\n--------------\n\n");
        }

        if(P==5)
        {
            TT=QT*TU;
            printf("\n-----Nota-----\n\n");
            printf("%.0fx---TUBAÍNA\n\n",QT);
            printf("Total: %.2fR$\n",TT);
            printf("\n--------------\n\n");
        }
system("cls");
    printf("\n- Valor Total: %.2fR$",TT);
    printf("\n\nSelecione a forma de pagamento: ");
    printf("\n\n  (1)  | 10%% Desconto para pagamentos  EM DINHEIRO");
    printf("\n  (2)  |  5%% Acréscimo para pagamentos EM CARTÃO DE CRÉDITO\n");
    printf("\nForma de Pagamento: ");
    scanf("%f",&FP);

        if(FP==1)
            {
            printf("\nInsira valor em dinheiro: ");
            scanf("%f",&DI);
            VD=TT*0.10;
            VF=TT-VD;

            TR=DI-VF;
system("cls");
            printf("\n |-------Nota-------|\n\n");
            printf(" |Desconto: %.2fR$\n\n",VD);
            printf(" |Valor Total: %.2fR$\n",TT);
            printf(" |Total com Desconto: %.2fR$\n\n",VF);
            printf(" |Dinheiro entregue: %.2fR$",DI);
            printf("\n |Seu troco: %0.2fR$\n\n",TR);
                if(TR<0)
                {
                    printf(" |Não aceitamos fiado!");
                    printf("\n |Pague o que deve: %.2fR$\n\n",TR);
                }
            printf(" |------------------|\n");
            }


        if(FP==2)
            {
system("cls");
            VD=TT*0.05;
            VF=TT+VD;
            printf("\n |-------Nota-------|\n\n");\
            printf(" |Acréscimo: %.2fR$\n",VD);
            printf(" |Total com Acréscimo: %.2fR$\n\n",VF);
            printf(" |------------------|\n");
            }
        printf("\nV 0.0.3");

    return 0;
}
