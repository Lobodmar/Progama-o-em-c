#include <stdio.h>

int main(){
    float nota1, nota2, nota3;
    float media;

    printf("*** Progama de Cálclo de média***\n");

    printf("Digite sua primeira nota\n");
    scanf("%f,",&nota1);

     printf("Digite sua segunda nota\n");
    scanf("%f,",&nota2);

     printf("Digite sua terceira nota\n");
    scanf("%f,",&nota3);

    media = (nota1 + nota2 + nota3) / 3;
    printf("A média é: %.2f", media); //ao colocar .2 diz o tanto de casas decimais que eu quero exibir //

    return 0;
}
