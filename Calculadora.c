#include <stdio.h>

int main(void)
{       //declarando as vari�veis
        float num1,
              num2;
        int oper;

        do
        {
            printf("\tCalculadora simples \n\n");

            printf("Escolha uma operacao: \n");

            printf("'0' para sair da calculadora\n");
            printf("'1' para somar (+)\n");
            printf("'2' para subtrair(-)\n");
            printf("'3' para multiplicar(*)\n");
            printf("'4' para dividir(/)\n");
            printf("'5' para achar o resto da divisao \n\n");

            scanf("%i",&oper);//recebendo o n�mero da opera��o que ser� realizada

            if (oper == 0){ //se for inserido o valor '0' ou algum caracter estranho ao exigido, a calculadora fechar�
                printf("\nFechando calculadora! Aperte qualquer tecla para fechar a tela.\n");
                break;
            }
            //verifica se o valor inserido est� dentro do exigido
            if(oper < 0 || oper >5){//se o valor inserido for menor que '0'ou maior que '5' a calculadora fecha
                printf("\nOpa! Algum erro foi cometido!");
                printf("\nFechando calculadora! Aperte qualquer tecla para sair da tela.\n");
                break;
            }
            //recebendo os n�meros que ser�o calculados
            printf("\nDigite o primeiro numero: ");
            scanf("%f", &num1);
            printf("\nDigite o segundo numero: ");
            scanf("%f", &num2);

            switch( oper )
            {
                case 1: //caso o usu�rio insira o n�mero 1, os valores ser�o somados
                        printf("\nCalculo: %.2f + %.2f = %.2f\n\n", num1, num2, num1 + num2);
                        break;

                case 2://caso o usu�rio insira o n�mero 2, os valores ser�o subtra�dos
                        printf("\nCalculo: %.2f - %.2f = %.2f\n\n", num1, num2, num1 - num2);
                        break;

                case 3://caso o usu�rio insira o n�mero 3, os valores ser�o multiplicados
                        printf("\nCalculo: %.2f * %.2f = %.2f\n\n", num1, num2, num1 * num2);
                        break;

                case 4://caso o usu�rio insira o n�mero 4, os valores ser�o divididos
                        if(num2 != 0)//verifica se o denominador � diferente de '0', se sim, executa a divisao
                            printf("\nCalculo: %.2f / %.2f = %.2f\n\n", num1, num2, num1 / num2);
                        else//se o denominador for igual a '0', envia uma mensagem e a calculadora retorna para o �nicio
                            printf("Divisao por 0?! Nao existe, lembra?! :( \n\n");
                        break;

                case 5://caso o usu�rio insira o n�mero 5, resto da divis�o entre os valores digitados ser� exibido
                        printf("\nO resto da divisao entre %.2f e %.2f --> %d\n\n", num1, num2, (int)num1 % (int)num2);
                        break;
            }

        }while(oper);

}
